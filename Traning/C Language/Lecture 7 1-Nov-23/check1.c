#include<stdio.h>
struct person{
	int srno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	int per;
}s1;

main(){
	int i,SRNO[6],SUB1[6],SUB2,SUB3,TOTAL,PER;
	struct person person[5];
	
	for(i=1;i<6;i++){
		printf(">>>>%d",i);
		scanf("%d",&SUB1[i]);
	}
	printf("%d", SUB1[i]);
}
