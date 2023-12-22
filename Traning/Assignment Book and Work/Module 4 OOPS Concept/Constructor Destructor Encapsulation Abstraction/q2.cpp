#include<iostream>
using namespace std;
class Operations
{
	int n1, n2;
	public : 
Operations(int a, int b)
{
	n1=a;
	n2=b;
}	
void Add(){
cout<<"\n\n\t"<<"Addition : "<<n1+n2;
}
void Sub(){
	cout<<"\n\n\t"<<"Subtraction : "<<n1-n2;
}			
void Mul(){
	cout<<"\n\n\t"<<"Multiplication : "<<n1*n2;
}	
void Div(){
	cout<<"\n\n\t"<<"Division : "<<n1/n2;
}
};
int main()
{
	Operations O(10,5);
	O.Add();
	O.Sub();
	O.Mul();
	O.Div();
	return 0;
}
