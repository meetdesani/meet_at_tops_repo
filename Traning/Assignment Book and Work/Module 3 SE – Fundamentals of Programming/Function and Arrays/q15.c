#include<stdio.h>
main()
{
	int size, i, j, arr[30], temp;
	
	printf("\n\n Input size of array : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n Input array [%d] : ",i);
		scanf("%d",&arr[i]);	
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}	
	}
	
	for(i=0;i<size;i++)
	{
		printf("\n\n array [%d] : %d",i, arr[i]);
	}
		
}
