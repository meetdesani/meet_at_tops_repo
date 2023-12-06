//Accept monthly salary, diduct 10% insurance premium, 10% loan installment and find out remining salary.
#include<stdio.h>
main(){
	int salary, salary1, rsalary, tenpercent, tenpercent1;
	printf("Write a salary: ");
	scanf("%d", &salary);
	tenpercent= salary * 10/100;
	salary1= salary-tenpercent;
	printf("Salary after Premium: %d", salary1);
	tenpercent1= salary1* 10/100;
	rsalary= salary1- tenpercent1;
	printf("Salary after loan installment: %d", rsalary);
}
