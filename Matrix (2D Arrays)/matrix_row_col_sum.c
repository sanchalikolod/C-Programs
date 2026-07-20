#include<stdio.h>
int main()
{
	int a[3][3],i,j,rowSum,colSum;
	printf("Enter elements to a 3x3 matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter element to row %d and column %d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe matrix is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//row sum:
	for(i=0;i<3;i++)
	{
		rowSum=0;
		for(j=0;j<3;j++)
		{
			rowSum+=a[i][j];
		}
		printf("\nSum of row %d is %d",i+1,rowSum);
	}
	//column sum:
	for(j=0;j<3;j++)
	{
		rowSum=0;
		for(i=0;i<3;i++)
		{
			colSum+=a[i][j];
		}
		printf("\nSum of column %d is %d",j+1,colSum);
	}
	
}
