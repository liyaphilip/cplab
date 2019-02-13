#include<stdio.h>
void main()
{
int num1,num2;
printf("Enter first number and enter second number:");
scanf("%d %d",&num1,&num2);
if(num1>num2)
	{
	printf("%d is greater than %d\n",num1,num2);
	}
else
	printf("%d is greater than %d\n",num2,num1);
}
