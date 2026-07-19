#include<stdio.h>
int main()
{
	int m,n,i;
	printf("\nEnter size of two arrays: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("\nEnter elements of array 1: ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element no. %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nEnter elements of array 2: ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element no. %d: ",i+1);
		scanf("%d",&b[i]);
	}
	printf("\nArray 1 elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
		
	}
	printf("\nArray 2 elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",b[i]);
		
	}
	printf("\nArray elements alternatively are:\n ");
	for(i=0;i<n;i++)
	{
		printf("\n%d\n%d",a[i],b[i]);
	}
}
