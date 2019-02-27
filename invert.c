/*program to print inverted pyramid using *
	*	*	*	*	*
	*	*	*	*
	*	*	*
	*	*
	*
Author:Liya Philip
Date:27/02/2019 */

#include<stdio.h>
void main()
{
	int limit,i,j;
	printf("Enter the limit:");
	scanf("%d",&limit);
	for(i=limit;i>0;i--)
		{
			for(j=0;j<i;j++)
				printf("*\t");
			printf("\n");
		}
}	
		
			
		
