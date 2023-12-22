#include<iostream>
using namespace std;
class Rectangle
{
    private:
	float length ;
     public:
float breadth ; // The data and member functions are inheritable
void Enter_lb()
{
	cout<<"\n\n\t  Enter the length of the rectangle : "; 
    cin>>length ;
    cout<<"\n\n\t  Enter the breadth of the rectangle : ";            
    cin>>breadth ;
}
float get_l()
{      		
	return length ; 
} 
};  
class Rectangle1 : public Rectangle   
{      
    private:
        	float area ;
    public:
void Rec_area(){  
	area=get_l( )*breadth ;  
}         
void Display(){
    cout<<"\n\n\t  Length = " <<get_l( ) ; 
    cout<<"\n\n\t  Breadth = " <<breadth ;
    cout<<"\n\n\t  Area = " <<area  ;
}
};  
int main()
{
    Rectangle1 r1 ;
    r1.Enter_lb( );
    r1.Rec_area( );
    r1.Display( );
	return 0;
}
