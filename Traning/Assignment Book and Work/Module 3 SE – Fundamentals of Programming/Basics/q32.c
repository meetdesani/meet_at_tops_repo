//Accpet 2 nums make adition and get sizeof.
#include<stdio.h>
main(){
	int a,b,c,size_c;
	printf("Write a first number: ");
	scanf("%d", &a);
	printf("Write a second number: ");
	scanf("%d", &b);
	c= a+b;
	size_c= sizeof(c);
	printf("Size of %d number is, %d", c,size_c);
}
