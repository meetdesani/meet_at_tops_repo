//q22 input base salary and calculate gross salary
#include<stdio.h>
main(){
	int salary,gross;
	printf("Write a base salary: ");
	scanf("%d",&salary);
	float hra,da;
	if(salary<=10000){
		hra= salary*20/100;
		da= salary*80/100;
		gross= salary+hra+da;
		printf("%.2f",hra);
		printf("%.2f",da);
		printf("Gross salary: %d",gross);
	}else if(salary<=20000 && salary>=10000){
		hra= salary*25/100;
		da= salary*90/100;
		salary= salary+hra+da;
		printf("Gross salary: %d",salary);
	}else if(salary>=20000){
		hra= salary*30/100;
		da= salary*95/100;
		salary= salary+hra+da;
		printf("Gross salary: %d",salary);
	}
}
