//q3 
#include<stdio.h>
main(){
	int a[10],even=0,odd=0,even_sum=0,odd_sum=0,i;
	for(i=0;i<10;i++){
		printf("write a number: ");
		scanf("%d",&a[i]);
	}
	if(a[i]%2==0){
		even_sum+=a[i];
		even++;
	}else{
		odd_sum+=a[i];
		odd++;
	}
	printf("Even number count: %d\n",even);
	printf("Odd number count: %d\n",odd);
	printf("Even number sum: %d\n",even_sum);
	printf("Odd number sum: %d\n",odd_sum);
}
