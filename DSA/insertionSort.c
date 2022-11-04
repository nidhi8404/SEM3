#include <stdio.h>

void insertionSort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

void printArray (int arr[],int n)
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

    insertionSort(arr,n);
    printArray(arr,n);
}
