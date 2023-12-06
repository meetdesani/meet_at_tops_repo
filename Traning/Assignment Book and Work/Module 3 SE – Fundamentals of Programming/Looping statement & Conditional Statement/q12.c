//Program of Armstrong Number in C Using For Loop & While Loop.

#include<stdio.h>

main()
{
	int num, ONum, rem, result = 0;
    printf("\n\n\t Input a number : ");
    scanf("%d", &num);
    ONum=num;

    while(ONum!= 0) 
	{
    	rem=ONum%10;
        result+=rem*rem*rem;
        ONum/=10;
    }

    if (result ==num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
