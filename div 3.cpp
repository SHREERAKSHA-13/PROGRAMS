#include <iostream>

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (number % 3 == 0) {
        std::cout << number << " is divisible by 3." << std::endl;
    } else {
        std::cout << number << " is not divisible by 3." << std::endl;
    }
    
    return 0;
}
