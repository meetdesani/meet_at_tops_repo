//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance.

#include<iostream>
using namespace std;

class A
{
        protected:
                int x ;
        public:
                A( )  // Constructor without argument
                {
                     x = 0 ;
                     cout<<"\n\n\t Constructor of class A without any argument is invoked" ;
                }
                A(int X) // Constructor with one argument
                {
                      x = X ;
                      cout<<"\n\n\t Constructor of class A with one argument is invoked" ;
                }
                void Enter_x()
                {  
					cout<<"\n\n\t Enter the value of x: " ; 
					cin >> x ; 
				}
                void Display_x()
                { 
					cout<<"\n\n\t x = " << x ; 
				}
};

class B : public A
{
        protected:
                int y ;
        public:
                B( ) : A( )  // Constructor without argument
                {
                        y = 0;
                        cout<<"\n\n\t Constructor of class B without any argument is invoked" ;
                }
                  
                B( int X,  int Y ) : A(X)   // Call for constructor A
                {
                        y = Y;
                        cout<<"\n\n\t Constructor of class B with two arguments in invoked" ;
                }
                void Enter_y()
                { 
					cout<<"\n\n\t Enter the value of y: " ; 
					cin>>y;  
				}
                void Display_y()
                { 
					cout<<"\n\n\t y = " << y ;  
				}
};

class C : public B
{
        private:
                int z ;
        public:
                C( ) : B( )   // Constructor without argument
                {
                       z = 0;
                       cout << "\n Constructor of class C without any argument is invoked\n" ;
                }
                
                C(int X, int Y, int Z): B(X, Y)    // Call for constructor B
                {
                       z = Z ;
                       cout<<"\n\n\t Constructor of class C with three arguments is invoked" ;
                }
                void Enter_z()
                { 
						cout<<"\n\n\t Enter the value of z: " ; 
						cin>>z ; 
				}
				
                void Display_z()
                { 
					cout<<"\n\t z = " <<z; 
				}
};

main()
{
            cout<<"\n\n\t The first object is in use now..." ;
            C c1 ;
            c1.Enter_x( );
            c1.Enter_y( );
            c1.Enter_z( );
            c1.Display_x( );
            c1.Display_y( );
            c1.Display_z( );
            cout<<"\n\n\t The second object is in use now..." ;
            C c2(5, 6, 7) ;
            c2.Display_x( );
            c2.Display_y( );
            c2.Display_z( );

}
