#include<stdio.h>
#include<string.h>
struct exam{
	char name[20];
	int sub1,total,sub2,sub3;
	float pr;
}e1;

main(){
	int i,j,sub1[5],sub2[5],sub3[5];
	char name[20];
	for(i=0;i<1;i++){
		printf("Enter your name here: ");
		scanf("%s",&name);
		strcpy(e1.name,name);
	}
	printf("%s\n",e1.name);
	for(i=0;i<1;i++){
		printf("Enter your marks here: ");
		scanf("%d", &sub1[i]);
		printf("Enter your marks here: ");
		scanf("%d", &sub2[i]);
		printf("Enter your marks here: ");
		scanf("%d", &sub3[i]);
		e1.sub1=sub1[i];
		e1.sub2=sub2[i];
		e1.sub3=sub3[i];
		e1.total=sub1[i]+sub2[i]+sub3[i];
		e1.pr=e1.total/3;
	}
	printf("\tname\tsub1\tsub2\tsub3\ttotal\tper\n");
	scanf("\t%s\t%d\t%d\t%d\t%d\t.2f",e1.name,e1.sub1,e1.sub2,e1.sub3,e1.total,e1.pr);
}
