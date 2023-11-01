#include<stdio.h>
#include<string.h>
main(){
	char name[20],hello[20];
	printf("Enter your string here: ");
	scanf("%s",&name);
	strcpy(hello,name);
	printf("This is copied string: %s",hello);
}
