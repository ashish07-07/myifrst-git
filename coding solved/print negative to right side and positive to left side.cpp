#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
	int i,j,k,n,a[10];
	cout<<"enter the value of n\n";
	cin>>n;
	int d=n;
	cout<<"enter the values of array\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	

	 j=0;
	 k=0;
	 while(k<d)
	 {
	 	  if(j==k)
	 	     k++;
	    
	       if(a[j]>0&&a[k]<0)
	      {
		  
	                 swap(a[j],a[k]);
	                 j++;
	      }
		   if (a[j]>0&&a[k]>0) 
		 
			          k++;
			          
//			          else
//			          
//					  {   
//					     cout<<"";
//					  	
//					  }
//		     
	         
	 
	 
	 	     
	 }
	 
	 for(i=0;i<d;i++)
	 {
	 	cout<<a[i]<<"\n";
	 }
	 
	
}
