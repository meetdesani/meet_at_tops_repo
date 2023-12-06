//convert miniutes into sec. and hours
#include<stdio.h>
main(){
	float min, sec, hou;
	printf("Write Miniutes: ");
	scanf("%f",&min);
	sec= min * 60;
	hou = min / 60;
	printf("Sec: %f",sec);
	printf("Hou: %f", hou);
}
