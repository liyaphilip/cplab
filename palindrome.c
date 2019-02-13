/*program to check whether number is palindrome or not 
Author: Liya Philip
Date:13/02/2019 */

#include<stdio.h>
void main()
{
	int reminder,reverse=0,number,i,n;
	printf("Enter the number:");
	scanf("%d",&number);
	n=number;
	while(number>0)
	{
		reminder=number%10;
		reverse=reverse*10+reminder;
		number=number/10;
	}
	if(n==reverse)
	{
		printf("%d is palindrome\n",n);
	}
	else
	{
		printf("%d is not a palindrome\n",n);
	}
}
