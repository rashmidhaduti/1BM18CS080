#include<stdio.h>
#include<conio.h>
#define max 10
int top=-1,item[max];
void push();
void pop();
void display();
void main()
{
int ch;
clrscr();
do
{
printf("\n 1.push \n 2.pop \n 3.display \n 4.exit");
printf("\n enter a choice (1-4)");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
	break;
case 2: pop();
	break;
case 3: display();
	break;
case 4: exit(1);
	break;
default:printf("enter choice between 1-4");
}
}while(ch!=4);
getch();
}
void push()
{
int val;
if(top==max)
printf("stack is full");
else
printf("enter value");
scanf("%d",&val);
item[++top]=val;
}
void pop()
{
if(top==-1)
printf("stack is empty");
else
printf("deleted element is %d",item[top]);
top=top-1;
}
void display()
{
int i;
if (top==-1)
printf("empty stack");
else
{
printf("updated stack is");
for(i=0;i<=top;i++)
printf("%d",item[i]);
}
}