#include<iostream>
#include<string.h>
using namespace std;
class Car
{
	char company[30];
	int model;
	int year;	
	
	public :
void getdata(char c[20],int m, int y){
	strcpy(company,c);
	model=m;
	year=y;
}
void setdata(){
	cout<<"Company Name : "<<company<<endl;
	cout<<"Model No : "<<model<<endl;
	cout<<"Year : "<<year<<endl;
}
};
int main(){
	Car obj;
	char c[30];
	int m, y;
	cout<<"Company Name : ";
	cin>>c;
	cout<<"Model No : ";
	cin>>m;
	cout<<"Year : ";
	cin>>y;
	
	obj.getdata(c,m,y);
	obj.setdata();
	
	return 0;
}
