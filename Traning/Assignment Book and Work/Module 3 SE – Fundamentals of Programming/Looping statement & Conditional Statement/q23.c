//C Program to Reverse a Number Using FOR Loop.

#include<stdio.h>
main()
{
	 int num, rNumber=0, rem;

    printf("\n\n\t Input an integer: ");
    scanf("%d", &num);

    for(;num!=0;num=num/10) 
	{
        rem=num % 10;
        rNumber=rNumber*10+rem;
    }

    printf("\n\n\t Reversed Number = %d", rNumber);
}
