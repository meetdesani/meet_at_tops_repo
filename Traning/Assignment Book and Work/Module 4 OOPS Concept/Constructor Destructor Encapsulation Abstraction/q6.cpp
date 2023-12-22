/* Write a C++ program to implement a class called Employee that 
has private member variables for name, employee ID, and salary. 
Include member functions to calculate and set salary based on employee 
performance. Using of constructor */

#include <iostream>
#include<string.h>
using namespace std;

class Employee
{
	int emp_id;
	char name[30];
	int salary;
	
	public : 
			Employee(int id, char en[30], int s) //constructor to initialize the values
			{
				emp_id=id;
				strcpy(name,en);
				salary=s;
			}
			
			void FinalSalary(double prate)
			{
				if(prate>0.0 && prate<=1.5)
					salary *= prate;
					
				else
					cout<<"\n\nt\ Invalid performance rating. Salary remains unchanged.";
				
			}
			
			int update_sal()
			{
				return salary;
			}
};

main()
{
	char en[30];
	int id, s;
	
	cout<<"\n\n\t Input employee id : ";
	cin>>id;
	cout<<"\n\n\t Input employee name : ";
	cin>>en;
	cout<<"\n\n\t Input employee Salary: ";
	cin>>s;
	double per_rat;
	cout<<"\n\n\t Input Performance Rating : ";
	cin>>per_rat;
	Employee E(id, en, s);
	
	
	E.FinalSalary(per_rat);
	cout<<"\n\n\t You got the salary.."<<E.update_sal();
		
}
