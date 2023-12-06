//Accpet value, check if it's Uppercase, Lowercase, Digit or Special Charactor.
#include<stdio.h>
main(){
	int a;
	printf("Write here: ");
	scanf("%d", &a);
	if(a>= 'A' && a<= 'Z'){
		printf("Enter value is Uppercase");
	}else if(a>='a'&& a<='z'){
		printf("Enter value is Lowercase");
	}else if(a>= 0 && a<=9){
		printf("Enter value is Number");
	}else{
		printf("Enter value is Special Character");
	}
}
