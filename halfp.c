/*program to print half pyramid
	1
	1	2
	1	2	3
	1	2	3	4
	1	2	3	4	5
Author:Liya Philip
Date:27/02/2019 */

#include<stdio.h>
void main()
{
	int i,j,limit;
	printf("Enter the limit:");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
		{
			for(j=1;j<=i;j++)
				printf("%d\t",j);
			printf("\n");
		}
}
	
