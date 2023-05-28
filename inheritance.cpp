#include <iostream>

// Base class
class Shape {
protected:
    double area;

public:
    void calculateArea() {
        std::cout << "Calculating area in Shape base class." << std::endl;
        area = 0;
    }

    void displayArea() {
        std::cout << "Area: " << area << std::endl;
    }
};

// Derived class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void calculateArea() {
        std::cout << "Calculating area in Circle derived class." << std::endl;
        area = 3.14159 * radius * radius;
    }
};

int main() {
    Circle circle(5.0);

    circle.calculateArea();  // Calls derived class method
    circle.displayArea();    // Calls base class method

    return 0;
}
