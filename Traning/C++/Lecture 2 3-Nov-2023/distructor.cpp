#include<iostream>
using namespace std;
class person{
	public:
	person(int num,int num1){
		cout<<"Adition is:"<<num+num1<<endl;
	}
	~person(){
		cout<<"This is your destuctor!"<<endl;
	}
};
main(){
	person obj(10,12);
}
