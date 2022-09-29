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
	cout<<"enter the position and the element to be inserted \n";
	cin>>pos>>num;
	
	for(i=b;i>pos;i--)
	{
	  a[i]=a[i-1];
		      
    
	}
	a[pos]=num;
	b++;
	for(i=0;i<b;i++)
	cout<<a[i]<<"\n";
	
	
	
}

