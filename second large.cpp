#include <iostream>
#include <vector>

int findSecondLargest(const std::vector<int>& numbers) {
    int largest = numbers[0];
    int secondLargest = numbers[0];
    
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] < largest) {
            secondLargest = numbers[i];
        }
    }
    
    return secondLargest;
}

int main() {
    int n;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> numbers(n);
    
    std::cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    
    int secondLargest = findSecondLargest(numbers);
    
    if (secondLargest != numbers[0]) {
        std::cout << "The second largest number is: " << secondLargest << std::endl;
    } else {
        std::cout << "There is no second largest number." << std::endl;
    }
    
    return 0;
}
