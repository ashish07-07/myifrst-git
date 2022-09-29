#include<iostream>
 
using namespace std;
 
int main()
 
{
 
int n,i,j,count,a[10];
 
cout<<"enter the size";
 
cin>>n;
 
cout<<"enter the elements of array\n";
 
for(i=0;i<n;i++)
 
cin>>a[i];
 
i=0;
 
while(i<n-1 )
 
{
 
j=i+1;
 
count=0;
 
if(a[i]==a[j])
 
 
 
       {   
            
           j++;
           
 
       
 
           while(j<n&&a[j]==a[i])
 
           {   
               
//                 a[j]=-1;
                
 
                  j++;
 
                 
 
   }
 
   count=j-i;
   
 
   cout<<"the element repeated is "<<a[i]<<"  "<<count<<"times\n";
   i=j-1; //changes
 
}
 
i++;
 
}
 
}
