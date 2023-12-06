//find maximum number among 3 numbers
#include<Stdio.h>
main(){
	int a,b,c,max;
	printf("Write First number: ");
	scanf("%d",&a);
	printf("Write Second number: ");
	scanf("%d",&b);
	printf("Write Third number: ");
	scanf("%d",&c);
	max= (a>b && a>c)? a:((b>c && b>a)?b:c);
	printf("%d is max. number",max);
}
