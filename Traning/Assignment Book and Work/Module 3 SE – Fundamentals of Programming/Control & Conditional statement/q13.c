//find Minimum number among 3 numbers
#include<Stdio.h>
main(){
	int a,b,c,min;
	printf("Write First number: ");
	scanf("%d",&a);
	printf("Write Second number: ");
	scanf("%d",&b);
	printf("Write Third number: ");
	scanf("%d",&c);
	min= (a<b && a<c)? a:((b<c && b<a)?b:c);
	printf("%d is Min. number",min);
}
