#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() const {
        return length * width;
    }
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle myRectangle(5.0, 3.0);
    std::cout << "Area: " << myRectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << myRectangle.calculatePerimeter() << std::endl;
    return 0;
}

