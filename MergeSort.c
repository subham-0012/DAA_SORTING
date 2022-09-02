#include <stdio.h>
#include <stdlib.h>
void merge(int arr[],int low,int mid,int high)
{
    int l=low,j=mid+1,k=low;
    int B[high+1];
    while(l<=mid&&j<=high)
    {
        if(arr[l]<arr[j])
        {
            B[k]=arr[l];
            l++;
        }
        else if(arr[l]>arr[j])
        {
            B[k]=arr[j];
            j++;
        }
        else
        {
            B[k]=arr[l];
            l++;
            j++;
        }
        k++;
    }
    for(;l<=mid;l++)
    {
        B[k]=arr[l];
        k++;
    }
    for(;j<=high;j++)
    {
        B[k]=arr[j];
        k++;
    }
    for(k=low;k<=high;k++)
    {
        arr[k]=B[k];
    }
}
void mergesort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
    int size=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the %dth element of array",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array before sorting is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    mergesort(arr,0,size-1);
    printf("The array after sorting is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}