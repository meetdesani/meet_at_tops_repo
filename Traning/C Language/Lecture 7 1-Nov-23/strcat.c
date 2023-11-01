#include<stdio.h>
#include<string.h>
main(){
	char name[20],copy[20];
	printf("First entry:");
	scanf("%s", &name);
	printf("Secound entry:");
	scanf("%s", &copy);
	printf("%s",strcat(name,copy));
}
