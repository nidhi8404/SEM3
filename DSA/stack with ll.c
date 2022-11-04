#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    int data;
};

struct node *top=NULL;

void push()
{
    int val;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the val:");
    scanf("%d",&val);
    new->data=val;
    if(top==NULL)
    {
        new->next=NULL;
    }
    new->next=top;
    top=new;
    return;
}

void pop()
{
    struct node *temp=top;
    if(top==NULL)
    {
        printf("Underflow");
    }
    temp->data=top->data;
    top=top->next;
    free(temp);
    return;
}

void display()
{
    while(top!=NULL)
    {
        printf("%d\n",top->data);
        top=top->next;
    }
}

void main()
{
    top==NULL;
    int choice;
    while(1)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\nEnter ur choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : push();
            break;
            case 2 : pop();
            break;
            case 3 : display();
            break;
            case 4 : exit(0);
            default: printf("Invalud CHoucwe");
        }
    }
}
