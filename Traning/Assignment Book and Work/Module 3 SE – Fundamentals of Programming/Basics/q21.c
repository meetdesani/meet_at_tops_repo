//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable.
#include<stdio.h>
main(){
	int a,b,c,i,j;
	printf("Write a 1st number: ");
	scanf("%d",&a);
	printf("Write 2ed number: ");
	scanf("%d",&b);
	c= b;
	b= a;
	a= c;
	printf("%d\n",a);
	printf("%d\n",b);
}
