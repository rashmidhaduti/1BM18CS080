#include<stdio.h>
#include<conio.h>
#include<string.h>
int max=50;
void push();
void peek();
void display();
void pop();
int isfull();
int isempty();
struct student
{
char usn[20];
char name[20];
char mail[20];
};
struct student s1[50];
int top=-1;
int isempty()
{
if(top==-1)
return 1;
else
return 0;
}
int isfull()
{
if(top==max-1)
return 1;
else
return 0;
}
void push()
{
if (isfull())
{
printf("stack is over flow\n");
}
else
{
top=top+1;
printf("enter usn\n");
scanf("%s",&s1[top].usn);
printf("enter name\n");
scanf("%s",&s1[top].name);
printf("enter mail\n");
scanf("%s",&s1[top].mail);
}
}
void pop()
{
int x;
if(isempty())
{
printf("stack underflow");
}
else
{
x=top;
printf("popped student\n");
printf("usn=%s \n",s1[x].usn);
printf("name=%s \n ",s1[x].name);
printf("mail=%s \n",s1[x].mail);
top=top-1;
}
}
void display()
{
int i;
if(isempty())
{
printf("stack underflow\n");
return;
}
printf("student details \n");
for(i=top;i>=0;i--)
{
printf("usn=%s \n",s1[i].usn);
printf("name=%s \n",s1[i].name);
printf("mail=%s \n",s1[i].mail);
printf("\n");
}
}
void peek()
{
printf("usn=%s \n",s1[top].usn);
printf("name=%s \n",s1[top].name);
printf("mail=%s \n",s1[top].mail);
}
void main()
{
int choice;
clrscr();
do
{
printf("1.push \n");
printf("2.pop \n");
printf("3.peek \n");
printf("4.display \n");
printf("5.exit \n");
printf("enter a choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
peek();
break;
}
case 4:
{
display();
break;
}
case 5:
{
exit(0);
break;
}
default:
{
exit(0);
}
}
}while(choice>-1);
}