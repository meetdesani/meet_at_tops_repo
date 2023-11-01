#include<stdio.h>
main(){
	int ans;
	ans=sum();
	printf("This is your sum %d", ans);
}
int sum(){
	int num,num1;
	printf("Enter your value: ");
	scanf("%d%d", &num,num1); 
	return num+num1;
}

