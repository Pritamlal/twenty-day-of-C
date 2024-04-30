#include<stdio.h>
int main()
{
    int i,size;
    int arr[1000];
    printf("enter the size::");
    scanf("%d",&size);
    printf("Enter the array elemts::");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
