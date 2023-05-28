#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> numbers(n);
    
    std::cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    
    std::sort(numbers.begin(), numbers.end());
    
    std::cout << "Numbers in ascending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}
