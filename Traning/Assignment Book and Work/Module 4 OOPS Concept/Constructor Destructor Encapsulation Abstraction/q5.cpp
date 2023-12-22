/* Write a C++ program to create a class called Triangle 
that has private member variables for the lengths of its 
three sides. Implement member functions to determine if 
the triangle is equilateral, isosceles, or scalene.  */

#include<iostream>
using namespace std;

class Triangle
{
	int side1, side2, side3;
	
	public : void getvalue()
			{
				cout<<"\n\n\t Please Enter Three Sides of a Triangle =  ";
				cin>>side1>>side2>>side3;
			} 
			
			void check()
			{
				if(side1 == side2 && side2 == side3)
  				{
  						cout<<"\n\n\t This is an Equilateral Triangle";
  				}
  				
  				else if(side1 == side2 || side2 == side3 || side1 == side3)
    			{
  						cout<<"\n\n\t This is an Isosceles Triangle";
				}
				
  				else
    					cout<<"\n\n\t This is a Scalene Triangle";
				}
};


main()
{
	Triangle T;
	
	T.getvalue();
	T.check();
}
