//Accept 5 names from user at run time.

#include<stdio.h>
main()
{
	char name[5][20];
	int i;
	
	//printf("\n\n Enter number of students : ");
	//scanf("%d",&n);
	
	for(i=0;i<5;i++)
	{
		printf("\n\n Input a name : ");
		//scanf("%s",&name[i]);	
		gets(name[i]);	
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n name [%d] : %s",i,name[i]);
    }   
	
}
