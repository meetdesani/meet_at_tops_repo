//check where the number is Positive, Negative or Zero.
#include<stdio.h>
main(){
	int a;
	printf("Write a number: ");
	scanf("%d",&a);
	if(a>0){
		printf("Positive");
	}else if(a<0){
		printf("Negative");
	}else if(a==0){
		printf("Zero");
	}else{
		printf("Invalid input!");
	}
}
