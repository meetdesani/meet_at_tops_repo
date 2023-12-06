//write a code to convert years into days and days into years.
#include<stdio.h>
main(){
	int select;
	float num,convert_year,convert_days;
	printf("Write 1 to write days and 2 to write years: ");
	scanf("%d", &select);
	printf("Write number: ");
	scanf("%f", &num);
	switch(select){
		case 1:
			convert_year= num/365;
			printf("Years: %f", convert_year);
			break;
		case 2:
			convert_days= num*365;
			printf("Days: %f", convert_days);
			break;
	}	
}
