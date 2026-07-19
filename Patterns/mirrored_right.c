#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("Mirrored right angled triangle");
	printf("\n\nEnter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=n;s>=i;s--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
