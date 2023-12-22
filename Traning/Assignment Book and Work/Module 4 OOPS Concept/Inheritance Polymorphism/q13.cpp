#include <iostream>
class MaxFinder {
private:
    int num1;
    int num2;
public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}
    friend int findMax(const MaxFinder& mf);
};
int findMax(const MaxFinder& mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    MaxFinder maxObj(num1, num2);
    int result = findMax(maxObj);
    std::cout << "Maximum number is: " << result << std::endl;
    return 0;
}
