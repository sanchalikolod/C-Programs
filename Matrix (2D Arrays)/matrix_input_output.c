#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter number of rows and columns for the matrix: ");
	scanf("%d%d",&row,&col);
	int a[row][col];
	
	printf("\nEnter elements to the matrix: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter element to row %d and column %d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe matrix is:\n ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	
}
