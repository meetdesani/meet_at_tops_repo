/* Calculate 5 numbers from user and calculate number of 
even and odd using of while loop  */

#include<stdio.h>

main()
{
	int i, e_sum, o_sum;
	
	i=0;
	while(i<5)
	{
		if(i%2==0)
			e_sum+=i;
			
		else
			o_sum+=i;
			
		i++;
	}
	printf("\n ............................ ");
	
	printf("\n\n Sum of even numbers are  : %d",e_sum); 
	printf("\n\n Sum of odd numbers are  : %d",o_sum); 
}
