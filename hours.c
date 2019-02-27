/*Program to print 24hours of a day with suitable suffixes
Author:Liya Philip
Date:27/02/2019 */

#include<stdio.h>
void main()
{
	int i,j;
	printf("12 Midnight\n");
	for(i=1;i<=11;i++)
		printf("%d AM\n",i);
	printf("12 Noon\n");
	for(j=1;j<=11;j++)
		printf("%d PM\n",j);
}
	
