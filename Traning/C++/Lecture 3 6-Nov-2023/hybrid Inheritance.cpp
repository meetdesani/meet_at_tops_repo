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
class middle{
	public:
		void xyz(){
			cout<<"Middle class call\n"<<endl;
		}
};

class child:public father,public middle{
	public:
		void display2(){
			cout<<"Child class call\n";
		}
	
};
int main(){
	child obj;
	obj.display();
	obj.display1();
	obj.display2();
	obj.xyz();
	return 0;
}
