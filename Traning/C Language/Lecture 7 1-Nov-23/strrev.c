#include<string.h>
#include<string.h>
main(){
	char name[20];
	printf("Enter your first name: ");
	scanf("%s",name);
	printf("Your name in reverse is: %s",strrev(name));
}
