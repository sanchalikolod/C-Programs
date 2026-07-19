#include<stdio.h>
void add()
{
	int a,b;
	printf("\nEnter any 2 numbers to add: ");
	scanf("%d%d",&a,&b);
	printf("\nAddition of %d and %d is %d",a,b,a+b);
}
void subtract()
{
	int a,b;
	printf("\nEnter any 2 numbers to subtract: ");
	scanf("%d%d",&a,&b);
	printf("\nSubtraction of %d and %d is %d",a,b,a-b);
}
void multi()
{
	int a,b;
	printf("\nEnter any 2 numbers to multiply: ");
	scanf("%d%d",&a,&b);
	printf("\nMultiplication of %d and %d is %d",a,b,a*b);
}
void div()
{
	int a,b,c,d;
	printf("\nEnter any 2 numbers to divide: ");
	scanf("%d%d",&a,&b);
	c=a/b;
	d=a%b;
	printf("\nQuotient is: %d",c);
	printf("\nRemainder is: %d",d);
}
void sq()
{
	int n;
	printf("\nEnter a number to square: ");
	scanf("%d",&n);
	printf("\nSquare of %d is %d",n,n*n);
}
void cube()
{
	int n;
	printf("\nEnter a number to cube: ");
	scanf("%d",&n);
	printf("\nCube of %d is %d",n,n*n*n);
}
int main()
{
	int choice;
	printf("1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n5. Square a number");
	printf("\n6. Cube a number");
	printf("\nEnter a choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		add(); break;
		case 2:
		subtract(); break;
		case 3:
		multi(); break;
		case 4:
		div(); break;
		case 5:
		sq(); break;
		case 6:
		cube(); break;
		default:
			printf("\nInvalid choice!!");
	}
}
