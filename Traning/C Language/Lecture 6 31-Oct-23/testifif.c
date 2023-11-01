#include<stdio.h>
main(){
	int i,input[5],sum=0,count=0,j,min=input[0];
	int  max=input[0];
	for(i=0;i<5;i++){
		printf("Your input here:");
		scanf("%d", &input[i]);
	}
	for(i=0;i<5;i++){
		printf("%d\t",input[i]);
		sum+= input[i];
	}
	printf("Sum is: %d\n", sum);
	printf("Average is: %d\n",sum/5);
	for(j=1;j<5;j++){
		if(input[j]<min){
			min = input[j];
		}
		if(input[j]>max){
			max = input[j];
		}
	}
	printf("Min number is: %d\n", min);
	printf("Max number is: %d\n", max);
}

