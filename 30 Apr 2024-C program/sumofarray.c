#include<stdio.h>
int main()
{
    int size;
    int arr[1000],i;
    int sum=0;
    printf("Enter the size::");
    scanf("%d",&size);
    printf("Enter the array elements::");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
