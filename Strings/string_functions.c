#include<stdio.h>
int main()
{
	char str1[25],str2[25];
	printf("Enter string 1: ");
	scanf("%s",&str1);
	printf("Enter string 2: ");
	scanf("%s",&str2);
	char temp1[25],temp2[25];
	strcpy(temp1,str1);
	strcpy(temp2,str2);
	
	int m=strlen(str1);
	int n=strlen(str2);
	printf("\n1. Length of %s is %d",str1,m);
	printf("\n   Length of %s is %d",str2,n);
	
	printf("\n\n2. Reverse of %s is %s",temp1,strrev(str1));
	printf("\n   Reverse of %s is %s",temp2,strrev(str2));
	
	int x=strcmp(temp1,temp2);
	if(x==1)
	printf("\n\n3. %s string is greater in ASCII terms",temp1);
	else if(x==-1)
	printf("\n%s string is greater in ASCII terms",temp2);
	else
	printf("\nBoth strings are equal.");
	
	char copy1[25],copy2[25];
	printf("\n\n4. Copying of string 1: ");
	strcpy(copy1,temp1);
	printf("\n   Original string is: %s",temp1);
	printf("\n   Copied string is: %s",copy1);
	printf("\n\n5. Copying of string 2: ");
	strcpy(copy2,temp2);
	printf("\n   Original string is: %s",temp2);
	printf("\n   Copied string is: %s",copy2);
	
	strcat(temp1,temp2);
	printf("\n\n6. Concatenated strings (joining both the strings): ");
	printf("%s",temp1);
	
}
