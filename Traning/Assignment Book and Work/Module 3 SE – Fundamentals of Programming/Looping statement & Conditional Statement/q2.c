//q2 WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
main(){
	int i,a[5];
	for(i=0;i<5;i++){
		printf("Write a number: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
}
