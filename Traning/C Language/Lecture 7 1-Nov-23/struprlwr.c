#include<stdio.h>
#include<string.h>
main(){
	char name[20];
	printf("Your name: ");
	scanf("%s", &name);
	printf("This is your upper case string: %s",strupr(name));
	printf("\nThis is your lower case string: %s",strlwr(name));
}
