//fahrenheit to Celsius 
#include<stdio.h>
main(){
	float f,c;
	printf("Write a Fehranheit: ");
	scanf("%f", &f);
	c=  (f - 32)*5/9;
	printf("Celsius: %f", c);
}
