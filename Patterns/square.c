#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Square pattern generator");
	printf("\nEnter number of rows(also equal to columns): ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
