//Multipal lvl inheritance
#include<iostream>
using namespace std;
class parent{
	public:
		void display(){
			cout<<"Public class!!";
		}
};
class uncle{
	public:
		void uncle1(){
			cout<<"Uncle class!!";
		}
};
class child:public parent,public uncle{
	public:
		void display1(){
				cout<<"Child class!!";
		}
};

int main(){
	child obj;
	obj.display();
	obj.display1();
	obj.uncle1();
	return 0;
}
