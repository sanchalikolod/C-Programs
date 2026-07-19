#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Right angled triangle");
	printf("\n\nEnter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
