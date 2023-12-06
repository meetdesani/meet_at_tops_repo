//convert years into days and months
#include<stdio.h>
main(){
	int year, month, days;
	printf("Write a year: ");
	scanf("%d", &year);
	month= year*12;
	days= year*365;
	printf("Total month: %d", month);
	printf("Total days: %d", days);
}
