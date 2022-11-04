#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10
#define PRIME 7

int h[TABLE_SIZE]={NULL};

void insert()
{
    int key,index,flag=0,i,h1key,h2key;
    printf("Enter Value");
    scanf("%d",&key);
    h1key=key%TABLE_SIZE;
    h2key=PRIME-(key%PRIME);
    for(i=0;i<TABLE_SIZE;i++)
    {
        index=(h1key+i*h2key)%TABLE_SIZE;
    if(h[index]==NULL)
    {
        h[index]=key;
        break;
    }
    }
    if(i==TABLE_SIZE)
    {
        printf("not found");
    }
}

void search()
{
    int key,index,flag=0,i,hkey;
    printf("Enter Value");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE;i++)
    {
        index=(hkey+i)%TABLE_SIZE;
    if(h[index]==key)
    {
        printf("value is %d",index);
        break;
    }
    }
    if(i==TABLE_SIZE)
    {
        printf("not found");
    }
}

void display()
{
    int i;
    for(i=0;i<TABLE_SIZE;i++)
    {
        printf("AT index %d value = %d",i,h[i]);
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
