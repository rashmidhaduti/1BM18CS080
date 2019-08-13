#include<stdio.h>
#include<conio.h>
#define max_size 10


int item[10];
int top=-1;
int x;
void push(int x)
{
printf("enter a value for x");
scanf("%d",&x);
if(isfull())
printf("error:stack is full");
else
item[++top]=x;
}
void pop()
{
if (isempty())
printf("error:stack is empty");
else
top--;
}
int display()
{
int i;
print("stack");
for(i=0;i<=top;i++)
printf("%d",item[i]);
printf("\n");
return item[top];
}
int isfull()
{
if(top==max_size)
return 1;
else
return 0;
}
int isempty()
{
if (top==-1)
return 1;
else
return 0;
}
int main()
{
int chioce;
printf("enter a chioce");
scanf("%d",&chioce);
{
switch(chioce);
case 1:
push(x);
break;
case 2:
pop();
break;
case 3:
display();
break;
default :
exit();
}
getch();
return 0;
}
