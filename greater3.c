/* Program to find greatest of three numbers
Author: Liya Philip
Date :06-02-2019*/ 

#include<stdio.h>
void main(){
	int number1,number2,number3;
	printf("\n Enter three integer numbers:");
	scanf("%d%d%d",&number1,&number2,&number3);
	/* To check greatest among three numbers */
	if(number1>number2){
		if(number1>number3){
			printf("%d is greater than %d and %d",number1,number2,number3);
		}
		else{
			printf("%d is greater than %d and %d",number3,number1,number2);
		}
	}
	else{
		if(number2>number3){
			printf("%d is greater than %d and%d",number2,number1,number3);
		}
	}
}
			
