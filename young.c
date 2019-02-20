/* program to find youngest of three
Author:Liya Philip
Date:20/2/2019 */

#include<stdio.h>
void main()
{
	int ram,shyam,ajay;
	printf("enter the ages of ram shyam ajay");
	scanf("%d %d %d",&ram,&shyam,&ajay);
	if(ram<shyam&&ram<ajay)
	{	
		printf("Ram is the younger\n");
	}
	else if(shyam<ram&&shyam<ajay)
	{
		printf("Shyam is younger\n");
	}
	else if(ajay<ram&&ajay<shyam)
	{
		printf("Ajay is younger\n");
	}
}
