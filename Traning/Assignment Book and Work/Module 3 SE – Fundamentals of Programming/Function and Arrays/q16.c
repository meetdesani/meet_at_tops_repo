//Accept 5 numbers from user and perform sum of array.

#include<stdio.h>

main()
{
	
	int a[5],i,sum=0; //array initialization
	
	for(i=0;i<5;i++)
	{
			printf("\n\n a[%d] : ",i);
			scanf("%d",&a[i]);
	}
	
	printf("\n ................... ");
	for(i=0;i<5;i++)
	{
			sum=sum+a[i]; //sum+=a[i]
			printf("\n\n a[%d] : %d",i, a[i]);
		
	}
	printf("\n ............................ ");
	printf("\n\n Sum of all the elements : %d",sum); 

}
