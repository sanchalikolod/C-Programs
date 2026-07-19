#include<stdio.h>
int main()
{
	int n,i,temp,j;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	printf("\nEnter elements of the array: ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element no. %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array elements as entered are:\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
	printf("\nThe array elements in descending order are: ");
	for(i=0;i<n;i++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
