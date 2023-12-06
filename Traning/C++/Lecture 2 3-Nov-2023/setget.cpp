#include<iostream>
using namespace std;
class person{
	string name;
	int age;
	public:
		void setName(string name1){
			this->name= name1;
		}
		string getName(){
			return name;
		}
		void setAge(int age1){
			this->age= age1;
		}
		int getAge(){
			return age;
		}
};
main(){
	person obj;
	obj.setAge(25);
	obj.setName("Meet");
	cout<<obj.getName()<<endl;
	cout<<obj.getAge();
}
