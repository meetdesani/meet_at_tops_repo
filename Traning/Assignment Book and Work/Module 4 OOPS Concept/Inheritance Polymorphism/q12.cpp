#include<iostream>
class NumberSwapper {
private:
    int num1;
    int num2;

public:
    NumberSwapper(int a, int b) : num1(a), num2(b) {}
	friend void swapNumbers(NumberSwapper &ns);
	void displayNumbers() {
        std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    }
};

void swapNumbers(NumberSwapper &ns) {
	ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    NumberSwapper ns(a, b);
	std::cout << "Before swapping: num1 = " << a << ", num2 = " << b << std::endl;
    swapNumbers(ns);
    ns.displayNumbers();
    return 0;
}
