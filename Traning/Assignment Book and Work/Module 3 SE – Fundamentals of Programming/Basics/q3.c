/*
WAP to Find Area and Circumference of Circle
*/
#include<stdio.h>
main(){
	float radius, circumference, area;
	printf("Write a radius of circle:");
	scanf("%f", &radius);
	circumference= 2 * 3.14 * radius;
	printf("Circumference of circle is %f", circumference);
	area= 3.14 * radius*radius;
	printf("\nArea of the circle is %f", area);
}
