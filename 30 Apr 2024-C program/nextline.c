#include<stdio.h>
int main()
{
	char sentence[1000];
	printf("Enter the sentence::");
	fgets(sentence,sizeof(sentence),stdin);
	
	char *token= strtok(sentence," ");
	while(token!=NULL)
	{
		printf("%s\n",token);
		token=strtok(NULL," ");	
	}	
}
