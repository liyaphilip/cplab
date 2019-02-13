/*program to check whether number is armstrong or not
Author:Liya Philip
Date:13/02/2019*/

#include<stdio.h>
void main()
{
	int number,reminder,sum=0,digit,n;
	printf("Enter the number:");
	scanf("%d",&number);
	n=number;
	while(number>0)
	{
		reminder=number%10;
		digit=reminder*reminder*reminder;
		sum=sum+digit;
		number=number/10;
	}
	if(n==sum)
	{
		printf("%d is armstrong number\n",n);
	}
	else
	{
		printf("%d is not armstrong number\n",n);
	}
}
