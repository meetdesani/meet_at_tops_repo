//single lvl inheritance
#include<iostream>
using namespace std;
class parent{
	public:
		void display(){
			cout<<"Public class!!";
		}
};

class child:public parent{
	public:
		void display1(){
				cout<<"Child class!!";
		}
};

int main(){
	child obj;
	obj.display();
	obj.display1();
	return 0;
}
