#include<iostream>

using namespace std;

int main()

{     

   int n,a[10],i;

cin>>n;

int m=n;

for(i=0;i<n;i++)

{

cin>>a[i];

}

i=0;

while(i<m-1)

{

if(a[i+1]-a[i]==1)

{

i++;

}

else

{

 

cout<<"the missing element is \n";

cout<<a[i+1]-1;

i++;

// break;

   }

}

}
