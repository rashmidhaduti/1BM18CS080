#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
struct node *rear  = NULL;
struct node *front = NULL;
void enqueue()
{
	NODE *newnode;
	newnode = (NODE*)malloc(sizeof(NODE));
	printf("Enter the element\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	if(rear == NULL)
	{
		rear  = newnode;
		front = newnode;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
	}
}

void dequeue()
{
	if(front==NULL)
	printf("Queue is Empty\n");
	else
	{
		printf("the deleted element is %d\n", front->data);
		front = front->next;
	}
}

void traversal()
{
	NODE *temp;
	if(front == NULL)
	printf("Queue is Empty\n");  
	else
	{
		temp = front;
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp = temp->next;
		}
	}
}

void main()
{
	int choice;
	while(1)
	{
		printf("1.Enqueue\n2.Dequeue\n3.Traversal\n4.Exit\n\n");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: traversal();
				break;
			case 4: exit(0);
		}
	}
}


