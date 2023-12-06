//q21 Write a program in C to read any month number in integer and display the number of days for this month.
#include<stdio.h>
main(){
	int a;
	printf("Write a number of Month: ");
	scanf("%d",&a);
	switch(a){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 Days");
			break;
		case 2:
			printf("28 Days");
			break;
		default:
			printf("30 Days");
			break;
	}	
}
