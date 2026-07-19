#include<stdio.h>
int main()
{
	int n,original,rev=0,d;
    printf("Palindrome number checker");
    printf("\nPalindrome number is a number which remains the same even when its digits are reversed.");
    printf("\nEnter a number: ");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
    	d=n%10;
    	rev=rev*10+d;
    	n=n/10;
	}
	if(original==rev)
	printf("%d is a palindrome number.",original);
	else
	printf("%d is not a palindrome number.",original);
}
