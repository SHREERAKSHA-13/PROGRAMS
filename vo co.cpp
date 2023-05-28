


#include <iostream>
#include <string>
#include <cctype>

void countVowelsAndConsonants(const std::string& str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;
    
    for (char c : str) {
        if (std::isalpha(c)) {
            char lowercaseChar = std::tolower(c);
            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
}

int main() {
    std::string inputString;
    int vowelCount, consonantCount;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);
    
    countVowelsAndConsonants(inputString, vowelCount, consonantCount);
    
    std::cout << "Number of vowels: " << vowelCount << std::endl;
    std::cout << "Number of consonants: " << consonantCount << std::endl;
    
    return 0;
}
