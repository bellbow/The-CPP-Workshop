// if/else exercise – Menu Program
#include <iostream>
#include <string>

int main()
{
    std::string input;
    int numb;

    std::cout << "1. Burger\n";
    std::cout << "2. Fries\n";
    std::cout << "3. Shake\n";
    std::cout << "4. Soda\n";

    std::cout << "Select your choice with a number 1-4: ";
    getline(std::cin, input);
    numb = std::stoi(input);

    if (numb == 1) {
        std::cout << "Burger $5.95";
    }
    else if (numb == 2) {
        std::cout << "Fries $2.95";
    }
    else if (numb == 3) {
        std::cout << "Shake $3.95";
    }
    else if (numb == 4) {
        std::cout << "Soda $1.99";
    }
    else {
        std::cout << "Invalid choice - not on menu";
    }
    return 0;
}
