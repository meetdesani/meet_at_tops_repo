/* 
function: With & Without 
function: Without & With
function: With & With
function: Without & Without
*/
#include<stdio.h>
main(){
	sum();
}

void sum(){
	int num,num1;
	printf("Enter your values: ");
	scanf("%d%d", &num,&num1);
	printf("This is your addition of two numbers: %d", num+num1);
}

