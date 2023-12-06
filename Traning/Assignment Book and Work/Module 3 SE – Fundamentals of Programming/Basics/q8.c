//find the circumference of the rectangle.
#include<stdio.h>
main(){
	int a,b,circurmference;
	printf("write length of rectangle:");
	scanf("%d", &a);
	printf("Write a height of rectangle:");
	scanf("%d", &b);
	circurmference= 2 * (a+b);
	printf("Circumference of rectangle: %d", circurmference);
}
