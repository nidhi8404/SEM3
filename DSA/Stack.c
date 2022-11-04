#include <stdio.h>
int stack[100],i,j,choice=0,n,top=-1;

void push();
void pop();
void show();

void main()
{
    printf("Enter Number of Element in Stack");
    scanf("%d",&n);
    while (choice != 4)
    {
        printf("Chosse one from the below option\n");
        printf("1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter Your choice:-\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : push();
            break;

            case 2 : pop();
            break;

            case 3 : show();
            break;

            default : printf("Invalid Input");
        }
    }
}

void push()
{
    int val;
    if(top == n)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("Enter the Value:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        top=top-1;
    }
}

void show()
{
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top==-1)
    {
        printf("Stack is Empty");
    }
}
