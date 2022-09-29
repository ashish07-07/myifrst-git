#include<iostream>
 
using namespace std;
 
 
 
 
 
  struct node
 
  {
 
     int data ;
 
     struct node*next;
 
 
 
  }*head=NULL;
 
  void create(int a[],int n)
 
  {   
 
        int i;
 
       struct node *last;
 
       
 
        struct node *t;
 
       
 
        head=new node;
 
        head->data=a[0];
        head->next=NULL; //added
 
        last=head;
 
       
 
        for(i=1;i<n;i++)
 
        {   
 
        t=new node;
 
        t->data=a[i];
        t->next=NULL; //added
        last->next=t;
 
        last=t;
 
       
 
}
 
       
 
  }     
 
  void display(struct node *p)
 
  {
 
  while(p!=NULL)
 
  {
 
     cout<<p->data<<" ";
 
     p=p->next;
 
 
 
 
 
}
 
 
 
  }
 
 
 
 
 
   
 
 
 
  int  main()
 
  {
 
  int i,n,a[20];
 
  cout<<"enter the size of an array\n";
 
  cin>>n;
  if(n<1 || n>20){
      cout<<"Enter in range 1 to 20"<<endl;
      return 0;
  }
 
  cout<<" enter the array elements";
 
  for(i=0;i<n;i++)
 
  cin>>a[i];
 
  create(a,n);
 
  display(head);
 
 
 return 0;
 
 
 
 
  }
