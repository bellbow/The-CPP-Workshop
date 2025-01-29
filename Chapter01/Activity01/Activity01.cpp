#include <iostream>

//Users will be placed into groups based on their age, and we'll use macros to define these age brackets. 
//We'll print the user's information back to them, along with their assigned group, using functions to encapsulate any repeated functionality
#define YOUTH 12
#define ADULT 18
#define SENIOR 65

void ageBracket(int age) {
    if (age < YOUTH) {
        std::cout << "You are in the CHILD group.";
    }

    else if (age < ADULT) {
        std::cout << "You are in the YOUTH group.";
    }

    else if (age < SENIOR) {
        std::cout << "You are in the ADULT group.";
    }

    else {
        std::cout << "You are in the SENIOR group.";
    }
    
}
int main() {
    std::string name;
    int age;
    std::cout << "What is your first name? ";
    std::cin >> name;
    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Welcome " << name << std::endl;
    ageBracket(age);
}