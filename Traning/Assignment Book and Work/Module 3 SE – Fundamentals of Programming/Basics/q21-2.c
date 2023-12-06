//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable.
#include<stdio.h>
main(){
	int i,j;
	printf("Write a 1st number: ");
	scanf("%d",&i);
	printf("Write 2ed number: ");
	scanf("%d",&j);
	i=i+j;
	j=i-j;
	i=i-j;
	printf("%d\n",i);
	printf("%d\n",j);
}
