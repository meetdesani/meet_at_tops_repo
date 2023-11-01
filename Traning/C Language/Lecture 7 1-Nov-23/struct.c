#include<stdio.h>
struct person{
	int age;
	char name[20];
}s1;

main(){
	struct person s2={24,"Meet"};
	char name[20]={"Jaishv"};
	s1.age=25;
	strcpy(s1.name,name);
	printf("This is your name: %s\n", s1.name);
	printf("This is your age: %d\n", s1.age);
	printf("This is your name: %s\n", s2.name);
	printf("This is your age: %d\n", s2.age);
}
