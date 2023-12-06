#include<stdio.h>
main(){
	int m,n;
	printf("Write a M number: ");
	scanf("%d",&m);
	if(m>0){
		n= 1;
		printf("N value is %d",n);
	}else if(m<0){
		n= -1;
		printf("N value is %d",n);
	}else if(m==0){
		n= 0;
		printf("N value is %d",n);
	}
}
