#include<iostream>
using namespace std;
class father{
	public:
		void display(){
			cout<<"father clas call!"
	;}
};
class son1:public father{
	public:
		void display1(){
			cout<<"Son1 class call"
	;	}
};
class son2:public father{
	public:
		void display2(){
			cout<<"Son2 class call"
	;	}
};
class son3:public father{
	public:
		void display3(){
			cout<<"son3 class call"
	;	}
};

int main(){
	son1 obj;
	obj.display();
	obj.display1();
	son2 obj1;
	obj1.display();
	obj1.display2();
	son3 obj2;
	obj2.display();
	obj2.display3();
}
