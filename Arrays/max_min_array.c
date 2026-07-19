#include<stdio.h>
int main()
{
	int i,n,sum=0,max,min;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter elements of array: ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element no. %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	printf("\nArray elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<max)
		min=arr[i];
	}
	printf("\nMaximum element in array is: %d",max);
	printf("\nMinimum element in array is: %d",min);
	
}
