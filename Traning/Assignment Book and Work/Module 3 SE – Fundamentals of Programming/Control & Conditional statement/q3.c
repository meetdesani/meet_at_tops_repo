//check if a year is leap year or not
#include<stdio.h>
main(){
	int a;
	printf("Write a year: ");
	scanf("%d", &a);
	if((a%4==0) && (a%400==0) && (a%100!=0)){
		printf("Leap year");
	}else{
		printf("Not a leap year");
	}
}
