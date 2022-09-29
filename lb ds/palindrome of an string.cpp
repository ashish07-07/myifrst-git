#include<string.h>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int main()
{

 int i,j,n,k;
 char s[25];
 char b[25];
 cout<<"enter the string\n";
 gets(s);
 
 
 for(i=0;s[i]!='\0';i++)
 {
 	
 }
// cout<<"the value of the strng is \n"<<i;
k=i;
for(i=0;i<k;i++)
{
	b[i]=s[i];
}
i=0;
j=k-1;
while(i<j)
{
  swap(s[i],s[j]);
  i++;
  j--;	
		
}
for(i=0,j=0;s[i]!='\0'&&b[j]!='\0';i++,j++)
{
  
  if(s[i]!=b[j])
  {
  
  cout<<"not a palindrone\n";
  break;
  }
}
if(s[i]=b[j]=='\0')
cout<<"its a palindrome\n";

}
