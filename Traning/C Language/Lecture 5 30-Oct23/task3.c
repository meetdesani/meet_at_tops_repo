#include<stdio.h>
main(){
	int arr[10],arr2[10],arr5[10],arr10[10],i,j=0,k=0,l=0;
	for(i=0;i<10;i++){
		printf("Enter your 10 values here: ");
		scanf("%d", &arr[i]);
		if(arr[i]%2==0){
			arr2[j]=arr[i];
			j++;
		}
		if(arr[i]%5==0){
			arr5[k]=arr[i];
			k++;
		}
		if(arr[i]%10==0){
			arr10[l]=arr[i];
			l++;
		}
	}
		printf("\nThis is your original list: ");
		for(i=0;i<10;i++){
			printf("%d\t", arr[i]);
		}
		printf("\nThis is div by 2:");
		for(i=0;i<j;i++){
			printf("%d\t", arr2[i]);
		}
		printf("\nThis is div by 5:");
		for(i=0;i<k;i++){
			printf("%d\t", arr5[i]);
		}
		printf("\nThis is div by 10:");
		for(i=0;i<l;i++){
			printf("%d\t", arr5[i]);
		}
	}

