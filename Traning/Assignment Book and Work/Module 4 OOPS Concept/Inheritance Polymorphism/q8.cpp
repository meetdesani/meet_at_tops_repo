#include <iostream>
class Calculator {
public:
    int mathOperation(int num1, int num2) {
        return num1 + num2;
    }

    int mathOperation(int num1, int num2, char operation) {
        if (operation == '-') {
            return num1 - num2;
        } else {
            std::cout << "Invalid operation\n";
            return 0;
        }
    }
	int mathOperation(int num1, int num2, double factor) {
        return static_cast<int>(num1 * num2 * factor);
    }
	double mathOperation(double num1, double num2) {
        if (num2 != 0.0) {
            return num1 / num2;
        } else {
            std::cout << "Cannot divide by zero.\n";
            return 0.0;
        }
    }
};

int main() {
    Calculator calculator;

    std::cout << "Addition: " << calculator.mathOperation(5, 3) << "\n";
    std::cout << "Subtraction: " << calculator.mathOperation(5, 3, '-') << "\n";
    std::cout << "Multiplication: " << calculator.mathOperation(5, 3, 1.5) << "\n";
    std::cout << "Division: " << calculator.mathOperation(5.0, 3.0) << "\n";
    return 0;
}

