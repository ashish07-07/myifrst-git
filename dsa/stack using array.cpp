#include<iostream>
using namespace std;
struct stack
{
	  int size;
	  int top;
	  int *s;
	  
	  
};
void create(struct stack*st)
{
	cout<<"enter the size of an array\n";
	cin>>st->size;
	st->s=new int [st->size];
	st->top=-1;
}
void push(struct stack*st,int x)
{
	if(st->top==st->size-1)
	  cout<<"stack full";
	  else
	  {
	  	st->s[++st->top] =x;
	  	  
	  }
}
void displayy(struct stack st)
{
	for(int i=st.top;i>=0;i--)
	{
		cout<<st.s[i]<<"\n";
	}
}
int pop(struct stack*st)
{
	if(st->top==-1)
	 cout<<"stack is empty";
	else
	return  st->s[st->top--];
	 
}

int main()
{
	struct stack st;
	 create (&st);
	push(&st,9);
	push(&st,1);
	push(&st,24);
	push(&st,4);
	push(&st,47);
	
	pop(&st);
	displayy(st);
	
	
	
}
