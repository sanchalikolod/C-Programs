#include<stdio.h>
int main()
{
	int n,i,d,sum=0,count=0;
	printf("Armstrong number checker");
	printf("\nAn Armstrong number is a number that equals the sum of its own digits, where each digit is raised to the power of the total number of digits.");
	printf("\nEnter a number: ");
	scanf("%d",&n);
	for(i=n;i>0;i/=10)
	{
		d=i%10;
		count++;
	}
	for(i=n;i>0;i/=10)
	{
		d=i%10;
		sum=sum+pow(d,count);
	}
	if(n==sum)
	printf("%d is an armstrong number.");
	else
	printf("%d is not an armstrong number.");
}
