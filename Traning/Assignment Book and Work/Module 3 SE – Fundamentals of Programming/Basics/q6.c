//find the area of a triangle
#include<stdio.h>
main(){
	float base, height, area;
	printf("Write a base length of triangle: ");
	scanf("%f", &base);
	printf("Write a height of triangle: ");
	scanf("%f", &height);
	area = 0.5 * base * height;
	printf("Area: %f", area);
}
