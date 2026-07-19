#include<stdio.h>
int main()
{
	int n,original,digit,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	original=n;
	printf("\nThe sum of digits of %d is ",original);
	while(n>0)
	{
		digit=n%10;
		sum=sum+digit;
		n=n/10;
	}
	printf("%d",sum);
}
