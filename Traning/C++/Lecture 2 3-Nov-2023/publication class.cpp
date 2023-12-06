#include<iostream>
using namespace std;
class book{
	string bookname, authorname, publication;
	int price, page;
	public:
		void setBookname(string bookname1){
			this->bookname= bookname1;
		}
		string getBookname(){
			return bookname;
		}
		void setAuthorname(string authorname1){
			this->authorname= authorname1;
		}
		string getAuthorname(){
			return authorname;
		}
		void setPublication(string publication1){
			this->publication= publication1;
		}
		string getPublication(){
			return publication;
		}
		void setPrice(int price1){
			this->price= price1;
		}
		int getPrice(){
			return price;
		}
		void setPage(int page1){
			this->page= page1;
		}
		int getPage(){
			return page;
		}
};
main(){
	book obj;
	obj.setBookname("Alchemist");
	obj.setAuthorname("Puolo Coelo");
	obj.setPublication("Penguin");
	obj.setPrice(699);
	obj.setPage(199);
	cout<<obj.getBookname()<<endl;
	cout<<obj.getAuthorname()<<endl;
	cout<<obj.getPublication()<<endl;
	cout<<obj.getPrice()<<endl;
	cout<<obj.getPage();
}

