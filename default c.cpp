#include <iostream>

class MyClass {
public:
    int value;

    // Default constructor
    MyClass() {
        value = 0;  // Initialize value to 0
        std::cout << "Default constructor called!" << std::endl;
    }
};

int main() {
    MyClass obj;  // Create an object using the default constructor
    
    std::cout << "Value: " << obj.value << std::endl;
    
    return 0;
}
