//q9 write a c program to check uppercase, lowercase, digit or special charactor.
#include<stdio.h>
main(){
	char a;
	printf("Write a value: ");
	scanf("%c",&a);
	if(a>='A' && a<='Z'){
		printf("Uppercase");
	}else if(a>='a'&&a<='z'){
		printf("Lowercase");
	}else if(a>='0'&&a<='0'){
		printf("Digits");
	}else{
		printf("Special Char.")
	}
} 
