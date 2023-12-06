/* Pattern

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

#include<stdio.h>
main()
{
	int size=5, i, j;

	for(i=1;i<=size;i++) 
	{
    	for(j=0;j<i;j++) 
		{
      		printf("* ");
    	}
    	printf("\n");
  	}
  
  	for(i=1;i<=size-1;i++) 
	{
    	for(j=0;j<size-i;j++) 
		{
      		printf("* ");
    	}
    	printf("\n");
  }
}
