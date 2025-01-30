// add outer infinite loop
#include <iostream>
#include <string>

int main()
{
    bool bIsRunning = true;

    while (bIsRunning) {
        std::string input;
        int numb;

        std::cout << "1. Burger\n";
        std::cout << "2. Fries\n";
        std::cout << "3. Shake\n";
        std::cout << "4. Soda\n";

        std::cout << "Select your choice with a number 1-4: ";
        getline(std::cin, input);
        numb = std::stoi(input);

        switch (numb) {

            case 1: 
                std::cout << "Burger $5.95";
            break;

            case 2: 
                std::cout << "Fries $2.95";
            break;

            case 3: 
                std::cout << "Shake $3.95";
            break;

            case 4: 
                std::cout << "Soda $1.99";
            break;

            default: 
                std::cout << "Invalid choice - not on menu";
            break;
        }
        return 0;
    }
}
