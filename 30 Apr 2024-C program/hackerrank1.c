#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number::");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>i;j--)
		{
			printf("%d\t",j);
		}
		
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d\t",i);
		}
		for(j=i+1;j<=n;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	
	for(i=1;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf("%d\t",j);
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d\t",i+1);
		}
		for(j=i+1;j<=n;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	
}
