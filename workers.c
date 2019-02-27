/*program to find efficiency of worker
Author:Liya Philip
Date:26/02/2019 */

#include<stdio.h>
void main()
{
	float time;
	printf("Enter the time taken by the worker");
	scanf("%f",&time);
	if((time>=2)&&(time<3))
		{
			printf("Worker is highly efficient");
		}
	else if((time>=3)&&(time<4))
		printf("Worker is ordered to improve speed");
	else if((time>=4)&&(time<5))		
		printf("Worker is given training to improve speed");
	else if(time>=5)
		printf("worker is terminated");
}			
