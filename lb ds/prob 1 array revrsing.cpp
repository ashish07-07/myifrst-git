#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int n,i,a[10];
	
	cout<<"enter the value of n\n";
	cin>>n;
	cout<<"enter the elements in an array\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
 i=0;int j=n-1;
while(i<j)
{
	swap(a[i],a[j]);
	i++;
	j--;
}
for(i=0;i<n;i++)
	{
		cout<<a[i];
	}


	
}
