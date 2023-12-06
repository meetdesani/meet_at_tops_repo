//find circumference of a traingle
#include<stdio.h>
main(){
	int s1,s2,s3,c;
	printf("enter length of side 1");
	scanf("%d", &s1);
	printf("enter length of side 2");
	scanf("%d", &s2);
	printf("enter length of side 3");
	scanf("%d", &s3);
	c = s1+s2+s3;
	printf("Circumference: %d", c);
}
