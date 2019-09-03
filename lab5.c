#include<stdio.h>
#include<stdlib.h>
#define s 5
void insert(int item,int *r,int *f,int q[]);
int delete(int q[],int *f,int *r);
void display(int q[],int r,int f);
void insert(int item,int *r,int *f,int q[])
{
if((*f==*r+1)||(*f==0&&*r==s-1))
{
printf("queue overflow");
return;
}
if(*f==-1)
*f=0;
*r=(*r+1)%s;
q[*r]=item;
}
int delete(int q[],int*f,int*r)
{
int item;
if(*f==-1)
{
printf("queue underflow");
return 0;
}
item=q[*f];
if(*f==*r)
{
*f=-1;
*r=-1;
printf("queue underflow");
}
else
*f=(*f+1)%s;
return item;
}
void display(int q[],int r,int f)
{
int i;
if(f==-1)
{
printf("queue is empty \n");
return ;
}
printf("contents of queue are:\n");
for(i=f;i<=r;i=(i+1)%s)
printf("%d ",q[i]);
printf("\n");
}
int main()
{
int f,r,ch=0,it,x,n,nd,qu[5],i;
f=-1;
r=-1;
while(ch!=-1)
{
printf("\n enter 1 to insert \n 2 to delete \n 3 to display \n -1 to exit \n");
printf("enter choice");
scanf("%d",&ch);

switch(ch)
{
case 1:printf("enter element to be inserted");
scanf("%d",&n);
insert(n,&r,&f,qu);

break;
case 2:
printf("the deleted elements are \n");
printf("%d \n" ,delete(qu,&f,&r));
break;
case 3:display(qu,r,f);
break;
case -1:break;
default:printf("invalid input \n");
}


}
return 0;
}
