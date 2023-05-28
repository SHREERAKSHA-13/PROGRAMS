
#include <iostream>

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (number % 2 == 0) {
        std::cout << number << " is divisible by 2." << std::endl;
    } else {
        std::cout << number << " is not divisible by 2." << std::endl;
    }
    
    return 0;
}
