//12.Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
main(){
	int s;
	printf("Write number of students: ");
	scanf("%d", &s);
	printf("Numbers of apple required is: %d", s*5);
}
