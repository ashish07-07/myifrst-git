#include<iostream>
using namespace std;
int w=10;
int main()
{
	int n,i,mid,a[20],b[20],c[20],y,j;
	cout<<"enter the size of an array and b\n";
	cin>>n>>m;

	cout<<"enter the array elements\n";
	for(i=0;i<n;i++)
	{
	
	cin>>b[i];

}
cout<<" c array"
for(i=0;i<n;i++)
{
	
	cin>>c[i];

}
	mid=(0+n-1)/2;
	for(i=0;i<=mid;i++)
	{
		b[i]=a[i];
		
	}
	for(i=mid+1;i<y-1;i++)
	{
		c[i]=a[i];
	}
	i=0;j=mid+1;
	int k=0;
	while(i<=mid&&j<=w)
	{
		if(b[i]<c[j])
	   	{
		
		a[k]=b[i];
		i++;k++;
	    }
	   else
	   {
		
	   a[k]=c[j];
	   j++;
	   k++;
      
	   }
		
	}
	int t=i;
	int u=j;
	int l=k;
	if(i=mid+1)
	{
	
	
	for(j=u;j<=n-1;j++)
	{
	
	    a[l]=a[j];
	    l++;
   }
}
	    
else 
{

    for(i=t;i<=mid;i++)
    {
	
      a[l]=a[i];
      l++;
    }
	    
}
	
	for(i=0;i<10;i++)
	cout<<a[i]<<"\n";
	
	
	
}
