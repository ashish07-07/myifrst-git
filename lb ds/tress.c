//program 11 



#include<stdio.h>
#include<conio.h>
#define NULL 0
struct node
{
 struct node *lchild,*rchild;
 int info;
};
struct node *root=NULL;
void inorder(struct node *root)
{
 if(root!=NULL)
 {
 inorder(root->lchild);
 printf("%d\t",root->info);
 inorder(root->rchild);
 }
 return;
}
void postorder(struct node *root)
{
 if(root!=NULL)
 {
 postorder(root->lchild);
 postorder(root->rchild);
 printf("%d\t",root->info);
 }
 return;
}
void preorder(struct node *root)
{
 if(root!=NULL)
 {
 printf("%d\t",root->info);
 preorder(root->lchild);
 preorder(root->rchild);
 }
 return;
}
void main()
{
 struct node *p,*q,*r;
 int n,i,num;
 clrscr();
 printf("\nEnter the number of elements");
 scanf("%d",&n);
 printf("\n Enter the data\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&num);
 (int)r=(int)malloc(sizeof(struct node));
 r->info=num;
 r->lchild=r->rchild=NULL;
 if(root==NULL)
 root=r;
 else
 {
 p=root;
 q=root;
 while(p!=NULL)
{
 q=p;
 if(num<p->info)
 p=p->lchild;
 else
 p=p->rchild;
}
if(num<q->info)
 q->lchild=r;
else
 q->rchild=r;
 } /* end else */
 } /*end for loop */
 printf("\n INORDER \n");
 inorder(root);
 printf("\n PREORDER \n");
 preorder(root);
 printf("\n POSTORDER\n");
 postorder(root);
 getch();
}
