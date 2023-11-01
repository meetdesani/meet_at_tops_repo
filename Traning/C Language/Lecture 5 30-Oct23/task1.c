#include<stdio.h>
main(){
	int arr[10],i,even[10],sumeven=0,sumodd=0, odd[10],j=0,k=0;
	for(i=0; i<10; i++){
		printf("Enter your input here: ", i);
		scanf("%d", &arr[i]);
		if(arr[i]%2==0){
			even[j]=arr[i];
			j++;
			sumeven += arr[i];
		}else{
			odd[k]=arr[i];
			k++;
			sumodd += arr[i];
		}
	}
	printf("\nThis is your inputs: ");
	for(i=0;i<10;i++){
		printf("%d \t", arr[i]);
	}
	printf("\nThis is even array: ");
	for(i=0;i<j;i++){
		printf("%d \t", even[i]);
	}
	printf("\nThis is odd array: ");
	for(i=0;i<k;i++){
		printf("%d \t", odd[i]);
	}
	printf("\nThis is your sum of even numbers: %d ", sumeven);
	printf("\nThis is your sum of odd numbers: %d ", sumodd);
}
