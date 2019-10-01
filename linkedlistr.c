
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;           
    struct node *next;
}*head;
void createList(int n) 			
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("UNABLE TO ALLOCATE MEMORY");
    }
    else
    {       
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; 
        head->next = NULL;  
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.\n");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; 
                newNode->next = NULL; 

                temp->next = newNode; 
                temp = temp->next;
            }
        }

        printf("LINKLIST CREATED\n");
    }
}
void deleteFirstNode()			
{
    struct node *toDelete;

    if(head == NULL)
    {
        printf("List is already empty.\n");
    }
    else
    {
        toDelete = head;
        head = head->next;

        printf("\nData deleted = %d\n", toDelete->data);

        free(toDelete);			

        printf("SUCCESSFULLY DELETED FIRST NODE FROM LIST\n");
    }
}
void deleteLastNode()			
{
    struct node *toDelete, *secondLastNode;

    if(head == NULL)
    {
        printf("List is already empty.\n");
    }
    else
    {
        toDelete = head;
        secondLastNode = head;

        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }

        if(toDelete == head)
        {
            head = NULL;
        }
        else
        {
            secondLastNode->next = NULL;
        }
        free(toDelete);

        printf("SUCCESSFULLY DELETED LAST NODE OF LIST\n");
    }
}
void deleteNode(int position)			
{
    int i;
    struct node *toDelete, *prevNode;

    if(head == NULL)
    {
        printf("List is already empty.\n");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for(i=2; i<=position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->next;

            if(toDelete == NULL)
                break;
        }

        if(toDelete != NULL)
        {
            if(toDelete == head)
                head = head->next;

            prevNode->next = toDelete->next;
            toDelete->next = NULL;
            free(toDelete);

            printf("SUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST\n");
        }
        else
        {
            printf("Invalid position unable to DELETE.\n");
        }
    }
}
void deleteele(int key)
{
    struct node *prev, *cur;
    while (head != NULL && head->data == key)
    {
       
        prev = head;
        head = head->next;
        free(prev);
        return;
    }

    prev = NULL;
    cur  = head;

   
    while (cur != NULL)
    {
        
        if (cur->data == key)
        {
            
            if (prev != NULL) 
                prev->next = cur->next;

            free(cur);
            return;
        } 

        prev = cur;
        cur = cur->next;
    }
   if(cur == NULL)
	{
		printf("ELEMENT NOT FOUND");
		return ;
	}
}
void displayList()
{	
    struct node *temp;
    int j=1;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data %d = %d\n",j++, temp->data); 
            temp = temp->next;                 
        }
    }
}
int main()
{
    int n, choice,pos,ele;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list :\n");
    displayList();
    while(1)
	{	
 		printf("-------------------------------------------------\n");
		printf("1.DELETE FORM FRONT\n2.DELETE FROM END\n3.DELETE FROM POS\n4.DELETE ELEMENT:\n5.DISPLAY\n6.EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1:deleteFirstNode();
				displayList();
				break;
			case 2:deleteLastNode();
				displayList();
				break;
			case 3:printf("Enter the position:\n");
				scanf("%d",&pos);
				deleteNode(pos);
				displayList();
				break;
			case 4:printf("Enter the element to be deleted:");
				scanf("%d",&ele);
				deleteele(ele);
				displayList();
				break;
			case 5:displayList();
				break;
			case 6:exit(0);	
			default : printf("INVAILD CHOICE");
					break;
		}
	}
				
    return 0;
}
