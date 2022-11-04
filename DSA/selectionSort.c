#include <stdio.h>
void selectionSort(int arr[],int n);
void swap(int *a,int *b);
void selectionSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]<arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void main()
{
    int arr[]={3,6,5,8,9,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);
    printArray(arr,n);
}
