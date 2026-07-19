#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter number of rows and columns for the 2 matrixes: ");
	scanf("%d%d",&row,&col);
	int a[row][col];
	int b[row][col];
	int c[row][col];
	
	printf("\nEnter elements to the 1st matrix: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter element to row %d and column %d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter elements to the 2nd matrix: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter element to row %d and column %d: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nMatrix 1 is:\n ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	printf("\n\n");
	printf("Matrix 2 is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nThe addition of both matrixes is: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",c[i][j]);
			
		}
		printf("\n");
	}
	
	
	
}
