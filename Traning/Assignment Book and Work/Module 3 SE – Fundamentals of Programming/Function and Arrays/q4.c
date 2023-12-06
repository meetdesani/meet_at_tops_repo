//WAP to find factorial using recursion.

#include<stdio.h>

int fact(int);

main()
{
    int x,n;
    printf(" \n\n\t Input the Number to Find Factorial :");
    scanf("%d",&n);

    x=fact(n);
    printf("\n\n\t Factorial of %d is %d",n,x);

}
int fact(int n)
{
    if(n==0)
        return(1);
    return(n*fact(n-1));
}
