//accpet marks, check if it's pass or fail
#include<stdio.h>
main(){
	int m;
	printf("Write marks: ");
	scanf("%d", &m);
	if(m>35){
		printf("Pass!");
	}else{
		printf("Fail!");
	}
}
