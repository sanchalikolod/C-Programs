#include<stdio.h>
int main()
{
	int n,i,j,row,col,max,min;
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
	max=a[0][0];
	min=a[0][0];
	
	printf("\nThe matrix is: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		     if(a[i][j]>max)
		     max=a[i][j];
		     if(a[i][j]<min)
		     min=a[i][j];
		}
	}
	printf("\nMaximum element in matrix is: %d",max);
	printf("\nMinimum element in matrix is: %d",min);
}
