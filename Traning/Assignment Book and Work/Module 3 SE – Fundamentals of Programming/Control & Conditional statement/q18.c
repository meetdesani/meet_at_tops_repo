//write c program to calculate profit and loss of the transation.
#include<stdio.h>
main(){
	int a,b,c,total_cost,total_profit,total_sell, total_loss;
	printf("Write Cost: ");
	scanf("%d",&a);
	printf("Write Sell: ");
	scanf("%d",&b);
	printf("Write Quantity: ");
	scanf("%d",&c);
	total_cost= a+c;
	total_sell= b+c;
	if(total_cost> total_sell){
		total_loss= total_cost- total_sell;
		printf("Total_loss: %d",total_loss);
	}else if(total_sell> total_cost){
		total_profit= total_sell- total_cost;
		printf("Total_Profit: %d",total_profit);
	}
}
