/* WAP to accept 5 numbers from user and check entered number is 
 even or odd using of array. */

#include<stdio.h>

main()
{
	
	int a[5],i; //array initialization
	int even=0, odd=0;

	for(i=0;i<5;i++)
	{
			printf("\n\n a[%d] : ",i);
			scanf("%d",&a[i]);
	}


	printf("\n ................... ");
	for(i=0;i<5;i++)
	{
			if(a[i]%2==0)
			{
				even++;
				printf("\n\n a[%d] : %d is even",i, a[i]);
			}
				
			else
			{
				odd++;
				printf("\n\n a[%d] : %d is odd",i, a[i]);
			}
			
		
	}
	printf("\n ............................ ");
	printf("\n\n Total even numbers are  : %d",even); 
	printf("\n\n Total odd numbers are  : %d",odd); 

}
