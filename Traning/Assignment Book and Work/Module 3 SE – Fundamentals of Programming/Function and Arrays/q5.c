/*WAP to take two Array input from user and sort them 
in ascending or descending order as per user’s choice. */

#include<stdio.h>
main()
{
	int size, i, j, arr[30], temp, arr1[30];
	
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
	printf("\n\n\t Array-1 ... Ascending Order....");
	for(i=0;i<size;i++)
	{
		printf("\n\n array [%d] : %d",i, arr[i]);
	}
	
	printf("\n\n\t ============================================");
	
	printf("\n\n Input size of array : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n Input array [%d] : ",i);
		scanf("%d",&arr1[i]);	
	}
	temp=0;
	for(i=0;i<size;++i)
	{
		for(j=i+1;j<size;++j)
		{
			if(arr1[i]<arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
			
		}	
	}
	printf("\n\n\t Array-2 ... Descending Order....");
	for(i=0;i<size;i++)
	{
		printf("\n\n array [%d] : %d",i, arr1[i]);
	}
	
		
}
