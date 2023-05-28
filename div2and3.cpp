#include <iostream>

void generateNumbers(int start, int end) {
    std::cout << "Numbers divisible by 2 and 3: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            std::cout << i << " ";
        }
    }
    
    std::cout << "\nNumbers divisible by 2: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0 && i % 3 != 0) {
            std::cout << i << " ";
        }
    }
    
    std::cout << "\nNumbers divisible by 3: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            std::cout << i << " ";
        }
    }
    
    std::cout << std::endl;
}

int main() {
    int start, end;
    
    std::cout << "Enter the starting number: ";
    std::cin >> start;
    
    std::cout << "Enter the ending number: ";
    std::cin >> end;
    
    generateNumbers(start, end);
    
    return 0;
}
