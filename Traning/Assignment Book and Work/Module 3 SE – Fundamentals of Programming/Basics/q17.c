//calculate person's monthly insurance premium from the salary!
#include<stdio.h>
int main(){
	int salary;
	printf("Write your salary: ");
	scanf("%d", &salary);
	printf("Your monthly premium: %d", salary*10/100);
	return 0;
}
