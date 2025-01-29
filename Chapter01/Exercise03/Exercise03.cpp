//re-written to follow along with textbook
#include <iostream>
#include <string>
//these are referencing header files which store the declaration of other functions

int main() {
// this is declaring the main function which returns an int with no parameters
    std::string firstName;
    std::string lastName;
    int age;

    std::cout << "Please enter your first name(s): ";
    getline(std::cin, firstName);
    std::cout << "Please enter your last name: ";
    getline(std::cin,lastName);
    std::cout << "Please enter your age: ";
    std::cin >> age;

    std::cout << "Your name is " << firstName << lastName << std::endl;
    std::cout << "You are " << age << " years old\n";
}