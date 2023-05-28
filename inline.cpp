#include <iostream>

inline int square(int num) {
    return num * num;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int result = square(number);

    std::cout << "Square of " << number << " is: " << result << std::endl;

    return 0;
}
