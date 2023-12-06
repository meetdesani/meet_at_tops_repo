//Accept 5 expense from user and find average of expense
#include<stdio.h>
main(){
	int a,b,c,d,e;
	printf("Write 1st expense: ");
	scanf("%d",&a);
	printf("Write 2ed expense: ");
	scanf("%d",&b);
	printf("Write 3rd expense: ");
	scanf("%d",&c);
	printf("Write 4th expense: ");
	scanf("%d",&d);
	printf("Write 5th expense: ");
	scanf("%d",&e);
	float avg;
	avg= (a+b+c+d+e)/5;
	printf("Avg expense: %f",avg);
}
