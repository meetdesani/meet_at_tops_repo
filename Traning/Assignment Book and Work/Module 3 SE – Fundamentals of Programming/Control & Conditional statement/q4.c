//simple calculator
#include<stdio.h>
main(){
	int a,fn,sn,ans;
	printf("Write 1 for aditiona, 2 for substraction, 3 for division or 4 for multiplication: ");
	scanf("%d", &a);
	printf("Write a first number: ");
	scanf("%d", &fn);
	printf("Write a second number: ");
	scanf("%d", &sn);
	switch(a){
		case 1:
			ans= fn+sn;
			printf("Answer: %d",ans);
			break;
		case 2:
			ans= fn-sn;
			printf("Answer: %d",ans);
			break;
		case 3:
			ans= fn/sn;
			printf("Answer: %d",ans);
			break;
		case 4:
			ans= fn*sn;
			printf("Answer: %d",ans);
			break;
	}
}
