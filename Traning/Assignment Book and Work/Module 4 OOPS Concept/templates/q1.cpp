#include<iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5, y = 10;
    cout<<"Before swapping: x = "<<x<<", y = "<<y<<endl;
    swapValues(x, y);
    cout<<"After swapping: x = "<<x<<", y = "<<y<<endl;
    double a = 3.14, b = 2.718;
    cout<<"Before swapping: a = "<<a<<", b = "<<b<< endl;
    swapValues(a, b);
    cout<<"After swapping: a = "<<a<< ", b = " <<b<<endl;
    return 0;
}
