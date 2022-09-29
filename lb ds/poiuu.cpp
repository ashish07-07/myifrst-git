#include<iostream>

using namespace std;

int main()

{

  int i,j,n,a[4],m,b[4],count=0;

 

  cin>>n;

  cin>>m;

  int k=m+n;

  for(i=0;i<n;i++)

  {

  cin>>a[i];

  }

 

   for(j=0;j<m;j++)

  {

  cin>>b[j];

  }

  for(i=0;i<n;i++)

  {

  for(j=0;j<m;j++)

    {

     if(a[i]==b[j])

     {

count++;

   }

    }

  }

 

  int y=m+n-count;

  cout<<y;

}
