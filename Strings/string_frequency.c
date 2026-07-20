#include<stdio.h>
int main()
{
	char str[50],ch;
	int i,count=0;
	printf("Enter a string: ");
	gets(str);
	printf("\nEnter a character you want to find the frequency of: ");
	scanf("%c",&ch);
	
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==ch)
		count++;
	}
	
	printf("\nFrequency of the character %c is: %d",ch,count);
	
	
}
