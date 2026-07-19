#include<stdio.h>
int main()
{
	int n,i,j,k,sum=0;
	printf("Fibonacci Series Generator");
	printf("\nEnter the number of terms of fibonacci series you want: ");
	scanf("%d",&n);
	if(n==1)
	printf("0");
	else if(n>1)
	{
		i=0;
		j=1;
		printf("\n%d\n%d",i,j);
		for(k=0;k<=n-2;k++)
		{
			sum=i+j;
			printf("\n%d",sum);
			i=j;
			j=sum;
		}
	}
	else
	printf("\nInvalid number of terms!!");
}
