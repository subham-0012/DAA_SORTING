#include<stdio.h>
#include<stdlib.h>
int insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>-1&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the %dth elemant of the array: ",i+1);
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,n);
    printf("The array after sorting is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}