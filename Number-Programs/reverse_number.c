#include<stdio.h>
int main()
{
	int n,original,digit;
	printf("Enter a number to be reversed: ");
	scanf("%d",&n);
	original=n;
	printf("\nThe reverse of %d is ",original);
	while(n>0)
	{
		digit=n%10;
		printf("%d",digit);
		n=n/10;
	}
}
