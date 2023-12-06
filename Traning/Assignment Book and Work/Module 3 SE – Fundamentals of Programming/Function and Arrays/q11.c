/* WAP to accept 5 numbers from user and display in reverse order 
using for loop and array. */

#include<stdio.h>

main()
{
	
	int a[5],i,sum=0; //array initialization
	
	for(i=0;i<5;i++)
	{
			printf("\n\n a[%d] : ",i);
			scanf("%d",&a[i]);
	}
	
	for(i=4;i>=0;i--)
	{
			printf("\n\n a[%d] : %d",i,a[i]);
			
	}
}
