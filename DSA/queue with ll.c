#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * front;
struct node * rear;

void insert()
{
    struct node * new = (struct node *)malloc(sizeof(struct node));
    int val;
    printf("Enter value;");
    scanf("%d",&val);

    new->data=val;
    new->next=NULL;

    if(front==NULL)
    {
        front=0;
        rear=0;
        return;
    }
    rear->next=new;
    rear=new;
    return;
}

void delete()
{
    struct node * temp;
    if(front==NULL)
    {
        printf("Queue Empty");
    }
    if(front==rear)
    {
        free(front);
        front=rear=NULL;
        return;
    }
    temp=front;
    front=front->next;
    free(temp);
}

void display()
{
    struct node * temp;
    if(front==NULL)
    {
        printf("Empty");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    return;
}

void main()
{
    front=NULL;
    rear=NULL;
    int choice;
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
            break;
            case 2 : delete();
            break;
            case 3 : display();
            break;
            case 4: exit(0);
            default:printf(" ");
        }
    }

}
