#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void insertbegin();
void insertlast();
void deletebegin();
void deletelast();
void display ();

void main()
{
    int choice;
    while(1)
    {
        printf("1.InsertBegin\n2.InsertLast\n3.Deletebegin\n4.DeleteLast\n5.Display\n6.Exit\nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : insertbegin();
            break;
            case 2 : insertlast();
            break;
            case 3 : deletebegin();
            break;
            case 4 : deletelast();
            break;
            case 5 : display();
            break;
            case 6 : exit(0);
            default:printf("Invalid Choice");
        }
    }
}

void insertbegin()
{
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("UNDERFLOW");
    }
    else{
        printf("Enter Value:");
        scanf("%d",&item);
        if(head==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            ptr->data=item;
            head=ptr;
        }
    }
    printf("Node inserted");
}

void insertlast()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("UNDERFLOW");
    }
    else{
        printf("Enter Value:");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL){
            ptr->next=NULL;
            ptr->prev=NULL;
            head=ptr;
        }
        else{
            printf("Enter value:");
            scanf("%d",&item);
            temp=head;
            ptr->next=ptr;
            ptr->prev=temp;
            ptr->next=NULL;
        }
    printf("Node inserted");
}
}

void deletebegin()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("UNDERFLOW");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("Node Deleted");
    }
    else{
        ptr=head;
        head = head -> next;
        head -> prev = NULL;
        free(ptr);
        printf("Node Deleted");
    }
}

void deletelast()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("UNDERFLOW");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("Node Deleted");
    }
    else{
        ptr = head;
        if(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        free(ptr);
           printf("Node Deleted");
    }

}

void display()
{
    struct node *ptr;
    printf("Printing Value:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
    ptr=ptr->next;
}
    }





