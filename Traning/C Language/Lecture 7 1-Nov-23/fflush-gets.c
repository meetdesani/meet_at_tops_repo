#include<stdio.h>
main(){
	char name[20];
	int number;
	printf("Enter your string here: ");
	scanf("%s", &name);
//	gets(name);	
	printf("%d \n", strlen(name));
	fflush(stdin);
	printf("Enter your string here: ");
	scanf("%d", &number);
	printf("%d", number);
}
