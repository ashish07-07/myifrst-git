#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[20],j;
	
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	i=0;
	j=n-1;
	
	while(i<j)
	{
		while(a[i]<0)
		{
			i++;
		}
		while(a[j]>0)
		{
			j--;
		}
		
		swap(a[i],a[j]);
		i++;
		j--;
		
		
	}
for(i=0;i<n;i++)
cout<<a[i]<<"\n";

	
}
