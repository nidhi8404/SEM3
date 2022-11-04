#include<stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

int h[TABLE_SIZE]={NULL};

void insert()
{
    int key,index,hkey,flag=0,i;
    printf("Emter Value:");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE;i++)
    {
        index=(hkey+i)%TABLE_SIZE;
        if(h[index]==NULL)
        {
            h[index]=key;
            break;
        }
    }
    if(i==TABLE_SIZE)
    {
        printf("cannot be inserted");
    }
}

void search()
{
    int key,index,hkey,flag=0,i;
    printf("Emter Value:");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE;i++)
    {
        index=(hkey+i)%TABLE_SIZE;
        if(h[index]==key)
        {
            printf("element is %d",index);
            break;
        }
    }
    if(i==TABLE_SIZE)
    {
        printf("cannot be inserted");
    }
}

void display()
{
    int i;
    printf("Hash Table :\n");
    for (i=0;i<TABLE_SIZE;i++)
    {
        printf("at index %d value = %d\n",i,h[i]);
    }
}

void main()
{
    int choice;
    while(1)
    {
        printf("\n1.Insert\n2.Search\n3.Display\n4.Exit\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : insert();
            break;
            case 2 :search();
            break ;
            case 3 : display();
            break;
            case 4: exit(0);
            default:printf("Invalid Choice");
        }
    }
}
