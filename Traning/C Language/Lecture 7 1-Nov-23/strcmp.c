#include<stdio.h>
#include<string.h>
main(){
	char name[20],copy[20];
	printf("First entry:");
	scanf("%s", &name);
	printf("Secound entry:");
	scanf("%s", &copy);
	if(strcmp(name,copy)==0){
		printf("Your string is same!");
	}else{
		printf("YOur string is not same!");
	}
}
