#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double calculateArea() const {
        return M_PI * radius * radius; 
    }
    double calculateCircumference() const {
        return 2 * M_PI * radius;
    }
};

int main() {
    Circle myCircle(5.0);
    std::cout << "Circle with radius " << myCircle.calculateArea() << " has area: " << myCircle.calculateArea() << "\n";
    std::cout << "Circle with radius " << myCircle.calculateCircumference() << " has circumference: " << myCircle.calculateCircumference() << "\n";
    return 0;
}

