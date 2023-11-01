#include<stdio.h>
main(){
	int num;
	printf("Enter your choice how many table:");
	scanf("%d", &num);
	int arr[num],i,j,k,l;
	printf("How would you like to see result, press 1 for each table and 2 for bulk!");
	scanf("%d", &l);
	if(l==1){for(i=0;i<num;i++){
		printf("Enter your tables here: ");
		scanf("%d", &arr[i]);
		
		for(j=1;j<=10;j++){
			printf("%d * %d = %d \n", arr[i],j,arr[i]*j);
		}
		printf("\n--------------------------------------\n");
	}
	}
	if(l==2){
		for(i=0;i<num;i++){
		printf("Enter your tables here: ");
		scanf("%d", &arr[i]);
	}
	printf("\n This is your choice: ");
	for(i=0;i<num;i++){
		printf("%d \t", arr[i]);
	}
	for(i=0;i<num;i++){
		printf("\nThis is your table of %d \n", arr[i]);
		for(j=1;j<=10;j++){
			printf("%d * %d = %d \n", arr[i],j,arr[i]*j);
		}
		printf("\n--------------------------------------\n");
	}
}
}
	
	
