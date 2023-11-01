#include<stdio.h>
main(){
	int i,input[5],sum=0,count=0,max=input[0],j;
	for(i=0;i<5;i++){
		printf("Your input here:");
		scanf("%d", &input[i]);
	}
	for(i=0;i<5;i++){
		printf("%d\t",input[i]);
		sum+= input[i];
	}
	printf("Sum is: %d\n", sum);
	printf("Average is: %d",sum/5);
	for(j=0;j<5;j++){
		if(input[i]>max){
			max = input[i];
		}
	}
	printf("Max number is: %d", max);
}
