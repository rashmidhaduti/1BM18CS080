#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node *top=NULL;
void push()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter a element \n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(top==NULL)
	{
		top=newnode;
	}
	else
	{
		newnode->next=top;
		top=newnode;
	}
}
void pop()
{
	if(top==NULL)
		printf("stack is empty");
	else
	{
		printf("deleted item %d is",top->data);
		top=top->next;
	}
}
void display()
{
	struct node *temp;
	if(top==NULL)
		printf("stack is empty");
	else
		{
			temp=top;
			while(temp!=NULL)
			{
				printf("%d \n",temp->data);
				temp=temp->next;
			}
		}
	}
void main()
{
	int choice;
	while(1)
	{
		printf("1.push \n 2.pop\n 3.display\n 4.exit \n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;												
			case 4:exit(0);
		}
	}
}			
