#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int  main()
{
	
	
	int a[10],i,n,j;
	

cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
i=0;j=n-1;
while(i<j)
{
	
	
	if(a[i]<0&&a[j]<0)
	{
		i++;
	}
	else if(a[i]>0&&a[j]<0)
	{
		swap (a[i],a[j]);
		j--;
	}
	else if((a[i]<0&&a[j]>0))
	{
		j--;
	}
}
cout<<"now check  if all the negative elements in an array are one side\n ";
for(i=0;i<n;i++)
cout<<a[i]<<" \n";
}
