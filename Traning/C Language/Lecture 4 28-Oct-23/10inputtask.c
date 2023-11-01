#include<stdio.h>
main(){
	int a,even,odd,count,totaleven,totalodd;
	for(a=1;a<=10;a++){
		printf("Input here!");
		scanf("%d",&count);
		if(count%2==0){
			even+= count;
			totaleven +=1;
		}else{
			odd+= count;
			totalodd+=1;
		}
	}
	printf("Even numbers: %d \n",even-1);
	printf("Odd numbers: %d \n",odd);
	printf("Total Even numbers: %d \n",totaleven);
	printf("Total Odd numbers: %d \n",totalodd);
}
