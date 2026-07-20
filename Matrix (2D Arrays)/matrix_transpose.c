#include<stdio.h>
int main()
{
	int n,i,j,row,col;
	printf("Enter number of rows and columns for the matrix: ");
	scanf("%d%d",&row,&col);
	int a[row][col];
	
	printf("\nEnter elements of the matrix:\n");
	for(i=0;i<row;i++)
	{
	   for(j=0;j<col;j++)
	   {
	   	
	   printf("\nEnter the element to row %d and column %d: ",i,j);
	   scanf("%d",&a[i][j]);
	   
       }
	}
	
	printf("\nThe matrix is: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe transpose of above matrix is:\n ");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
