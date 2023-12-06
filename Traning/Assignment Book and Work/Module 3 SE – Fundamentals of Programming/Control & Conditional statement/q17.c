//find if triangle can be formed with given number or not
#include<stdio.h>
main(){
	int a,b,c, sum;
	printf("Write 1st angle: ");
	scanf("%d",&a);
	printf("Write 2ed angle: ");
	scanf("%d",&b);
	printf("Write 3rd angle: ");
	scanf("%d",&c);
	sum= a+b+c;
	if(sum==180){
		printf("Triangle is possible.");
	}else{
		printf("Triangle is not possible.");
	}
}
