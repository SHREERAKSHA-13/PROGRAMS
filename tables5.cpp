#include <iostream>

void printTableOfFive(int range) {
    for (int i = 1; i <= range; i++) {
        std::cout << "5 * " << i << " = " << 5 * i << std::endl;
    }
}

int main() {
    int range;
    
    std::cout << "Enter the range for the table of 5: ";
    std::cin >> range;
    
    std::cout << "Table of 5 up to " << range << ":\n";
    printTableOfFive(range);
    
    return 0;
}
