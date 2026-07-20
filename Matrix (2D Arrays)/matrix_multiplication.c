#include<stdio.h>
int main()
{
	int m,n,i,j,k;
	printf("Enter number of rows and columns for 2 matrices: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	int b[m][n];
	int c[m][n];
	
	printf("\nEnter elements of matrix 1: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter element to row %d and column %d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements of matrix 2: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter element to row %d and column %d: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nMatrix 1 is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix 2 is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	//multiplication loop:
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				c[i][j]=a[i][k]*b[k][j];
			}
		}
	}
	
	printf("\nMultiplication of the two matrices is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	
}
