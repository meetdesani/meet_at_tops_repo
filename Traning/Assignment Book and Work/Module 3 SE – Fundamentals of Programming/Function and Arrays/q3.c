//WAP to find reverse of string using recursion.

#include <stdio.h>

void rev_string();

main()
{
	printf("\n\n\t Input a string : ");
    rev_string();
}

void rev_string() 
{
    char c;
    scanf("%c", &c);
    if(c!='\n') 
	{
        rev_string();
        printf("%c", c);
    }
}
