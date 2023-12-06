//q26 electricity unite and charges
#include<stdio.h>
main(){
	int unit;
	printf("Write a unit: ");
	scanf("%d",&unit);
	int bill,upto50,upto50to150,upto150to250;
	if(unit<50){
		bill= unit * 0.5;
		printf("Bill %d\n",bill);
	}else if(unit>50 && unit<=150){
		upto50= 50 * 0.5;
		unit= unit-50;
		bill= unit * 0.75;
		bill= bill + upto50;
		printf("Bill %d\n",bill);
	}else if(unit>150 && unit<=250){
		upto50= 50 * 0.5;
		upto50to150= 100*0.75;
		unit= unit-150;
		bill= unit * 1.2;
		bill= bill+ upto50 + upto50to150;
		printf("Bill %d\n",bill);
	}else if(unit>250 && unit<=350){
		upto50= 50 * 0.5;
		upto50to150= 100*0.75;
		upto150to250= 100*1.2;
		unit= unit-250;
		bill= unit * 1.5;
		bill= bill+ upto50 + upto50to150 + upto150to250;
		printf("Bill %d\n",bill);		
	}
	int bill_with_adition_surcharge,surcharge;
	surcharge=bill * 20/100;
	bill_with_adition_surcharge= bill+surcharge;
	printf("Final Bill with aditonal surcharge: %d",bill_with_adition_surcharge);
}
