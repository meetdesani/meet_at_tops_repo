/*
Write a C++ program to implement a class called Bank Account 
that has private member variables for account number and balance. 
Include member functions to deposit and withdraw money from the account.

*/
#include <iostream>
#include<string.h>
using namespace std;

class Bank
{
	char dname[30];
	long int accno;
	char actype[10];
	float bal;
	
	public :
			void SetData()
			{
				strcpy(dname,"Mr.Shukla");
				accno=8877665433;
				strcpy(actype,"Current");
				bal=20000;
			}
			
			void Deposite()
			{
				int damt1;
        		cout<<"\n\n\t Enter Deposit Amount = ";
        		cin>>damt1;
        		bal+=damt1;	
			}
			
			void Withdraw()
			{
				 int wamt1;
        		cout<<"\n\n\t Enter Withdraw Amount = ";
        		cin>>wamt1;
        		if(wamt1>bal)
                		cout<<"\n\n\t Cannot Withdraw Amount";
        		bal-=wamt1;
			}
			
			void PrintData()
			{
				cout<<"\n\n\t ----------------------";
        		cout<<"\n\n\t Accout No. : "<<accno;
        		cout<<"\n\n\t Name : "<<dname;
        		cout<<"\n\n\t Account Type : "<<actype;
        		cout<<"\n\n\t Balance : "<<bal;  
			}
};

main()
{
	Bank B;
	B.SetData();
	B.PrintData();
	B.Deposite();
	B.PrintData();
	B.Withdraw();
	B.PrintData();
	
}
