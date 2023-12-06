//Series : 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main()
{
	int n, i, sum = 0;

    printf("\n\n\t Input a positive integer : ");
    scanf("%d", &n);

	printf("\n\n\t");
	
	for(i=1;i<=n;++i) 
	{
        printf(" %d + ", i);
    }
	
	printf("\n\n\t");
    for(i=1;i<=n;++i) 
	{
        sum+=i;
        printf(" %d + ", sum);
    }

    
}
