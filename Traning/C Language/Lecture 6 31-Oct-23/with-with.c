#include<stdio.h>
main(){
	int ans;
	int num,num1;
	printf("Enter your value: ");
	scanf("%d%d", &num,&num1);
	ans= sum(num,num1);
	printf("This is your sum %d", ans);
}
int sum(int num, int num1){
	return num+num1;
}
