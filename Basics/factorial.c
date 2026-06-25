#include<stdio.h>
int main()
{
	int n,factorial=1,i=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		factorial=factorial*i;
		i++;
	}
	printf("Factorial of %d is %d",n,factorial);
	
}
