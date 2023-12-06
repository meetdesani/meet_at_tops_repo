//a19
#include<stdio.h>
main(){
	int id;
	char name[10];
	printf("Write Customer ID: ");
	scanf("%d",&id);
	printf("Write Customer Name: ");
	scanf("%s",&name);
	int unit;
	printf("Write Customer Unit: ");
	scanf("%d",&unit);
	float bill,upto350,upto350to600,upto600to800;
	upto350= 350*1.2;
	upto350to600= 250*1.5;
	upto600to800= 200*2;
	printf("Customer ID: %d ",id);
	printf("Customer Name: %s\n",name);
	if(unit<=350){
		bill= unit * 1.2;
		printf("Bill: %.2f",bill);
	}else if(unit>350&&unit<=600){
		unit= unit-350;
		bill= unit * 1.5;
		bill= bill+upto350;
		printf("Bill: %.2f",bill);
	}else if(unit>600&&unit<=800){
		unit= unit-600;
		bill= unit*1.8;
		bill= bill+upto350+upto350to600;
		printf("Bill: %.2f",bill);
	}else if(unit>800){
		unit= unit-800;
		bill= unit*2;
		bill= bill+upto350+upto350to600+upto600to800;
		printf("Bill: %.2f",bill);
	}
}
