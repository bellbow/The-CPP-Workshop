#include <iostream>
#include <string>

int main() {
    std::string input;
    int number;

    std::cout << "Please enter a number: ";
    getline(std::cin, input);
    number = std::stoi(input);

    if (number > 10) {
        std::cout << "That number is bigger than 10!\n";
    }

    else if (number < 10) {
        std::cout << "That is less than 10!\n";
    }
    else {
        std::cout << "That is 10!";
    }
    return 0;
}
// if / else if / else works about the same as in Python