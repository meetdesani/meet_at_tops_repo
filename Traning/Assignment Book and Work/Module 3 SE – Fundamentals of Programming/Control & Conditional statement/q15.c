//eligilibility for admission to a professional course based on following critaria.
#include<stdio.h>
main(){
	int p,m,c,total_marks;
	printf("Write Physics marks: ");
	scanf("%d", &p);
	printf("Write Chemistry marks: ");
	scanf("%d", &c);
	printf("Write Math marks: ");
	scanf("%d", &m);
	total_marks= p+c+m;
	if((m>=65 && p>=55 && c>=50 && total_marks>=190)||(m+p>=140)){
		printf("Eligible");
	}else{
		printf("Not Eligible");
	}
}
