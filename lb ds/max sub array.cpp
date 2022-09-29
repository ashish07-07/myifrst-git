#include<iostream>
using namespace std;
int main()
{
	
	
	int i,csum=0,maxsum=0,n,a[20];
	cout<<"enter the value of n\n";
	cin>>n;
	cout<<"enter the content inside an array\n";
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		csum=csum+a[i];
		
		if(csum<0)
		
		csum=0;
		else if (csum>0&&csum>maxsum)
		
		
		{
			maxsum=csum;
			csum=maxsum;
		}
		
		else
		csum=csum;
		
	}
	cout<<"the maximum element in an array is"<<maxsum;
}
