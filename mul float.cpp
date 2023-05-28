#include <iostream>

int main() {
    float num1, num2;
    
    std::cout << "Enter the first float number: ";
    std::cin >> num1;
    
    std::cout << "Enter the second float number: ";
    std::cin >> num2;
    
    float result = num1 * num2;
    
    std::cout << "The multiplication of the two float values is: " << result << std::endl;
    
    return 0;
}
