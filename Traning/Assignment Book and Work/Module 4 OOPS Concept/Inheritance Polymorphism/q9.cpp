//Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include<iostream>
using namespace std;

class Matrix
{
        int a[3];
    public:
        void accept();
        void display();
        void operator +(Matrix x);
};
void Matrix::accept()
{
        cout<<"\n\n\t Enter Array: \n";
        for(int i=0; i<3; i++)
        {
                cin>>a[i];
        }
}
void Matrix::display()
{
        for(int i=0; i<3; i++)
        {
                cout<<"\n\n\t";
        		cout<<a[i];
        }
}
void Matrix::operator +(Matrix x)
{
        int mat[3];
        for(int i=0; i<3; i++)
        {
                mat[i]=a[i]+x.a[i];
               
        }
        cout<<"\n\n\t Addition of Matrix : \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<"\n\n\t";
                cout<<mat[i];
                
        }
}

main()
{
        Matrix m,n;
        m.accept();       
        n.accept();      
        cout<<"\n First Array : \n\n";
        m.display();   
        cout<<"\n Second Array : \n\n";
        n.display(); 
        m+n;        // Addition of Two Matrices. Overloaded '+' Operator
}
