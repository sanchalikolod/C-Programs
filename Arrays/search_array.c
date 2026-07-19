#include<stdio.h>
int main()
{
	int i,n,sum=0,num,flag=-1;
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
		
	}
	
	printf("\nEnter a number to search in array: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==arr[i])
		{
			flag=1; break;
		}
	}
	if(flag==1)
	printf("%d is present in array",num);
	else
	printf("%d is not present in array",num);
}
