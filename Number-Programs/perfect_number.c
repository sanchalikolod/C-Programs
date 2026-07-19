#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Perfect number checker");
	printf("\nA perfect number is a positive integer that is exactly equal to the sum of its proper positive divisors (excluding the number itself).");
	printf("\nEnter a number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(n==sum)
	printf("%d is a perfect number.");
	else
	printf("%d is not a perfect number.");
}
