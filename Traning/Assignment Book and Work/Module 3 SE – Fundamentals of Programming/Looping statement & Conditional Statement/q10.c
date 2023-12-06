/* Write a program you have to make a summation 
of first and last Digit. (E.g., 1234 Ans: -5) */

#include<stdio.h>
main()
{
	int n, sum=0, firstDigit, lastDigit;
    printf("\n\n\t Input number to find sum of first and last digit = ");
    scanf("%d", &n);
    
    lastDigit=n%10;
    
    while(n>=10)
    {
        n=n/10;
    }
    firstDigit=n;
    
    sum=firstDigit+lastDigit;
    printf("\n\n\t Sum of first and last digit = %d", sum);
}
