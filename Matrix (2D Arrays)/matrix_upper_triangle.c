#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("Enter elements to a 3x3 matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter element to row %d and column %d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nUpper triangular matrix is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<=j)
			{
				printf("%d ",a[i][j]);
			}
			else
			printf("0 ");
		}
		printf("\n");
	}
	printf("\nLower triangular matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>=j)
			{
				printf("%d ",a[i][j]);
			}
			else
			printf("0 ");
		}
		printf("\n");
	}
	
	
}
