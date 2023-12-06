#include<iostream>
using namespace std;
class grandfather{
	public:
		void display(){
			cout<<"Grandfather class call\n";
		}
};
class father:public grandfather{
	public:
		void display1(){
			cout<<"Father class call\n";
		}
};
class child:public father{
	public:
		void display2(){
			cout<<"Child class call";
		}
	
};
int main(){
	child obj;
	obj.display();
	obj.display1();
	obj.display2();
	return 0;
}
