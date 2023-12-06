//find surface area of a prism
#include<stdio.h>
main(){
	int l,w,h, a, b,c, s;
	printf("write prism length: ");
	scanf("%d", &l);
	printf("Write prism width: ");
	scanf("%d", &w);
	printf("Write prism height: ");
	scanf("%d", &h);
	a= 2*(l*w);
	b= 2*(l*h);
	c= 2*(w*h);
	s= a+b+c;
	printf("Surface area: %d",s);
}
