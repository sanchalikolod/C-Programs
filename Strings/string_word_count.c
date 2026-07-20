#include<stdio.h>
int main()
{
	char str[50];
	int i,word=1;
	printf("Enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		word++;
	}
	
	printf("\nNumber of words in the sentence are: %d",word);
	
}
