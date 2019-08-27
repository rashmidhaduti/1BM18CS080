
#include<stdio.h>
#define maxsize 5
int isempty(int [] );
int isfull(int []);
int Front(int[]);
void enque(int,int[]);
void deque(int[]);
void display(int[]);
int front=-1;int rear=-1;
int s[maxsize]; 
int main()
{
int ch;
do
{

printf("choose an option \n");
printf("1.enque\n");
printf("2.deque\n");
printf("3.front\n");
printf("4.display\n");
printf("5.exit\n\n");
scanf("%d",&ch);
int n;
switch(ch)
{
case 1:printf("enter number to be enqued");
enque(n,s);
scanf("%d",&n);
break;
case 2:deque(s);
break;
case 3:Front(s);
break;
case 4:display(s);
break;
default:printf("wrong option");
}
}while(ch!=5);
if (ch==5) printf("done");

 
}
int isempty(int s[])
{
if((rear==-1)&&(front==-1))
{
return 1;
}
else
return 0;
}
int isfull(int s[])
{
if(rear==maxsize)
return 1;
else
return 0;
}
int Front(int s[])
{
return s[front];
}
void enque(int x,int s[])
{
if (isfull(s))
printf("queue is full");
else if(isempty(s))
{
rear=0;front=0;
s[rear]=x;
}
else
{
rear++;
s[rear]=x;
}
}
void deque(int s[])
{
if(isempty(s))
printf("que is empty");
else
front--;
}
void display(int s[])
{
for(int i=front;i<=rear;i++)
{
printf(" %d ",s[i]);
}
}

