#include<stdio.h>
#include<stdlib.h>
#define size 4
void enqueue(int q[],int*r);
{
    int item;
    if(*r==size-1)
    printf("queue is full\n");
    else
    {
        printf("enter the value to be entered\n");
        scanf("%d",&item);
        (*r)++;
        q[*r]=item;
        
    }
}
void dequeue(int q[],int*r,int*f)
{
    if(*f>*r)
    printf("queue is empty\n");
    else
    {
        printf("item deleted is:%d\n",q[*f]);
        (*f)++;
    }
}
void display(int q[],int*r,int*f)
{
    int i;
    if(*f>*r)
    printf("queue is empty:\n");
    for(i=*f;i<=*r;i++)
    {
        printf("%d\n",q[i]);
    }
}
void main()
{
    int q[20];
    int r=-1;
    int f=0;
    int a;
    while(1)
    {
        printf("\n 1.Insert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.exit \n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:enqueue(q,&r);
            break;
            case 2:dequeue(q,&r,&f);
            break;
            case 3:display(q,&r,&f);
            break;
            case 4:exit(0);
            break;
            default:printf("invalid choice\n");
        }
    }
}
