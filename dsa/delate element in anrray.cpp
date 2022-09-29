#include<iostream>
using namespace std;
int main()
{
	int n,a[30],i,pos,num;
	cout<<"enter the siz eof an array\n";
	cin>>n;
	int b=n;
	cout<<"enter the array elements\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the element to be removed \n";
	cin>>pos;
	
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	cout<<a[i];
}
