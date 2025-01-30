#include <iostream>
#include <string>


int main() {
    std::string input;
    std::string printed = "";
    int printCount = 0;
    int value;
    int count;

    std::cout << "Choose the value whose multiples will be printed: ";
    getline(std::cin, input);
    value = std::stoi(input);

    std::cout<< "Maximum number of multiples to print: ";
    getline(std::cin, input);
    count = std::stoi(input);

    for (int i=1; i<=100; ++i) {
        if (printCount == count) {
            break;
        }
        if (i % value != 0) {
            continue;
        }
        std::cout << i << std::endl;
        ++printCount;
    }

}