/* Pattern
A 
B  C
D  E  F
G  H  I  J
K  L  M  N  O

*/

#include<stdio.h>
main()
{
	int i, j;
	char k=65;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
				printf(" %c",k);
				k++;
		}
		
		printf("\n");
	}
}
