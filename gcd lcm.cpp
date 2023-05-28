#include <iostream>

int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    
    return calculateGCD(b, a % b);
}

int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    
    // LCM = (a * b) / GCD
    int lcm = (a * b) / gcd;
    
    return lcm;
}

int main() {
    int number1, number2;
    
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    
    std::cout << "Enter the second number: ";
    std::cin >> number2;
    
    int gcd = calculateGCD(number1, number2);
    int lcm = calculateLCM(number1, number2);
    
    std::cout << "GCD of " << number1 << " and " << number2 << " is: " << gcd << std::endl;
    std::cout << "LCM of " << number1 << " and " << number2 << " is: " << lcm << std::endl;
    
    return 0;
}
