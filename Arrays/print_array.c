#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter elements of array: ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element no. %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
}
