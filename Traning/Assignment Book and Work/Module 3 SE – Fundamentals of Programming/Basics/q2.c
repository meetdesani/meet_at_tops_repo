/*
Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)
*/
#include<stdio.h>
main(){
	int a, b, choice;
	printf("Write frist value!");
	scanf("%d", &a);
	printf("Write second value!");
	scanf("%d", &b);
	printf("write 0 to adition\n");
	printf("write 1 to substraction\n");
	printf("write 2 to multiplication\n");
	printf("write 3 to devision\n");
	printf("write a number here\n");
	scanf("%d", &choice);
	switch(choice){
		case 0:
			printf("Answer: %d", a+b);
			break;
		case 1:
			printf("Answer: %d", a-b);
			break;
		case 2:
			printf("Answer: %d", a*b);
			break;
		case 3:
			printf("Answer: %d", a/b);
			break;
	}
}
