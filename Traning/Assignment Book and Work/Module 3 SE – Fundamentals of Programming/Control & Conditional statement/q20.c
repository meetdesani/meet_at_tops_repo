//If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
#include<stdio.h>
main(){
	int bill,surcharge;
	printf("Write a bill amount: ");
	scnaf("%d", &a);
	if(bill>800){
		surcharge= bill*(18/100);
		bill= bill+surcharge;
	}else if(256>bill){
		bill= 256;
	}
	printf("Bill: %d",&bill);
}
