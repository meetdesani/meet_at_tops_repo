//o read temperature in centigrade and display a suitable message
#include<stdio.h>
main(){
	int a;
	printf("Write a current Temp: ");
	scanf("%d", &a);
	if(a<0){
		printf("Freezing weather");
	}else if(a<=10 && a>0){
		printf("Very Cold weather");
	}else if(a<=20 && a>10){
		printf("Cold weather");
	}else if(a<=30 && a>20){
		printf("Normal weather");
	}else if(a<=40 && a>30){
		printf("Hot weather");
	}else if(a>40){
		printf("Very hot weather");
	}
}
