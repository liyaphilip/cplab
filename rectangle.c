/* program to check whether area of a rectangle is greater than its perimeter
author:Liya Philip
Date:20/02/2019 */

#include<stdio.h>
void main()
{
	int length,breadth,area,perimeter;
	printf("enter the value of length and breadth:");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area>perimeter)
	{
		printf("Area of rectangle is greater than perimeter\n");
	}
	else
	{
		printf("Area of rectangle is less than perimeter\n");
	}
}
