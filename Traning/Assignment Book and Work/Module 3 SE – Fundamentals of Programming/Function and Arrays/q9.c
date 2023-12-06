//WAP to show difference between Structure and Union.

#include<stdio.h>

union student  //Union has all below members.
{
	int rollno;
	char name[30];	
	char address[3]; //Last member value will be overwrite & will be outcome only.  
};

/*
//Print all the members' output.
struct student  //structure has all below members.
{
	int rollno;
	char name[30];	
	char address[3];
};
*/

main()
{

	union student s1, s2;  
	
	printf("\n\n Enter a Rollno : ");
	scanf("%d",&s1.rollno);
	printf("\n\n Enter a Name : ");
	scanf("%s",&s1.name);
	printf("\n\n Enter Address : ");
	scanf("%s",&s1.address);

	printf("\n\n ....... Info of student1 ..........");
	printf("\n\n Roll no : %d",s1.rollno);
	printf("\n\n Name    : %s" ,s1.name);
	printf("\n\n Name    : %s" ,s1.address);
	
	//s2.rollno=102;
	//strcpy(s2.name,"C++ Programing");
	
	printf("\n\n Enter a Rollno : ");
	scanf("%d",&s2.rollno);
	printf("\n\n Enter a Name : ");
	scanf("%s",&s2.name);
	printf("\n\n Enter Address : ");
	scanf("%s",&s2.address);
	
	
	printf("\n\n ....... Info of student2 ..........");
	printf("\n\n Roll no : %d",s2.rollno);
	printf("\n\n Name    : %s" ,s2.name);
	printf("\n\n Address    : %s" ,s2.address); 

}
