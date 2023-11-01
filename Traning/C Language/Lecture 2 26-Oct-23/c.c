#include<stdio.h>
main(){
	int i,j;
	char alp = 'A';
	for (i=0;i<=4;i++){
		for (j=0;j<=i;j++){
			printf("%c",alp+j);
		}	
	printf("\n");
	}
}
