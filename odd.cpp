#include <iostream>

void generateOddNumbers(int start, int end) {
    if (start % 2 == 0) {
        start++; // Increment start to the next odd number if it's even
    }
    
    while (start <= end) {
        std::cout << start << " ";
        start += 2; // Increment by 2 to generate the next odd number
    }
    
    std::cout << std::endl;
}

int main() {
    int start, end;
    
    std::cout << "Enter the starting number: ";
    std::cin >> start;
    
    std::cout << "Enter the ending number: ";
    std::cin >> end;
    
    std::cout << "Odd numbers between " << start << " and " << end << ": ";
    generateOddNumbers(start, end);
    
    return 0;
}
