#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter elements of array: ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element no. %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nArray elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
		sum=sum+arr[i];
	}
	printf("\nSum of array elements is: %d",sum);
}
