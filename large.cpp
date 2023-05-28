#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    if (num1 > num2) {
        std::cout << "The largest number is: " << num1 << std::endl;
    } else if (num2 > num1) {
        std::cout << "The largest number is: " << num2 << std::endl;
    } else {
        std::cout << "Both numbers are equal." << std::endl;
    }
    
    return 0;
}
