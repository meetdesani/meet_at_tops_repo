#include<stdio.h>
main(){
	int i,num[5];
	for(i=0;i<5;i++){
		printf("Enter your 5 Diff. values:");
		scanf("%d", &num[i]);
	}
	printf("This is your array:");
	for (i=0;i<5;i++){
		printf("%d\t", num[i]);
	}
}
