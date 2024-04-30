#include<stdio.h>

int main()
{
	int num,size=10;
	int arr[1000],i;
	printf("Enter the size::\n");
	scanf("%d",&num);
	printf("Enter the elemetns::");
	for(i=0;arr[i]!='\0';i++)
	{
		scanf("%d",&arr[i]);	
	}

	
	for(i=0;arr[i]!='\0';i++)
	{
		num+=arr[i];	
	}
	printf("%d",num);
	
}
