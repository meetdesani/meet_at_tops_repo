#include <iostream>

class Calculator {
public:
    // Function to add two numbers
    double add(double a, double b) {
        return a + b;
    }

    // Function to subtract two numbers
    double subtract(double a, double b) {
        return a - b;
    }

    // Function to multiply two numbers
    double multiply(double a, double b) {
        return a * b;
    }

    // Function to divide two numbers
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: Division by zero." << std::endl;
            return 0;  // Returning 0 for simplicity in case of division by zero
        }
    }
};

int main() {
    Calculator calculator;
    double num1, num2;

    // Get user input for two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform calculations
    std::cout << "Sum: " << calculator.add(num1, num2) << std::endl;
    std::cout << "Difference: " << calculator.subtract(num1, num2) << std::endl;
    std::cout << "Product: " << calculator.multiply(num1, num2) << std::endl;
    std::cout << "Quotient: " << calculator.divide(num1, num2) << std::endl;

    return 0;
}

