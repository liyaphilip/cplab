/* program to print reverse of a number
Author:Liya Philip
Date:13/02/2019*/

#include<stdio.h>
void main()
{
	int reminder,reverse=0,number,i,n;
	printf("Enter the number:");
	scanf("%d",&number);
	n=number;
	for(i=0;number>0;i++)
	{
		reminder=number%10;
		reverse=reverse*10+reminder;
		number=number/10;
	}
	printf("%d is the reverse of %d \n",reverse,n);
}        
