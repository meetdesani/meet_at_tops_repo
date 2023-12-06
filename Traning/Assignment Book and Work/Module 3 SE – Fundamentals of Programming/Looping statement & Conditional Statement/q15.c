//Calculate sum of 10 numbers using of while loop.

#include<stdio.h>
main()
{
	int  j, sum = 0;

    printf("\n\n\t The first 10 natural number is :\n\n");
 
    for(j=1;j<= 10;j++)
    {
        sum=sum+j;
        printf("  %d ",j);    
    }
    printf("\n\n\t The Sum is : %d", sum);
}
