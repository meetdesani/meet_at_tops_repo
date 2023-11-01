#include<stdio.h>
main(){
	int i,j,k,l,arr[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter your value here [%d][%d]", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("---------------------------------------");
	for(k=0;k<3;k++){
		for(l=0;l<3;l++){
			printf("Enter your value here [%d][%d]", k,l);
			scanf("%d", &arr[k][l]);
		}
	}
	printf("\nThis is your matrix: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\nThis is your matrix: \n");
	for(k=0;k<3;k++){
		for(l=0;l<3;l++){
			printf("%d", arr[k][l]);
		}
		printf("\n");
	}

}
