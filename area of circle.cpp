#include <iostream>
#include <cmath>

int main() {
    double radius;
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    
    double area = M_PI * pow(radius, 2);
    
    std::cout << "The area of the circle is: " << area << std::endl;
    
    return 0;
}
