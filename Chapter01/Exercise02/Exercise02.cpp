// Preprocessor directives activity.
#include <iostream>
#include <string>

#define GRADE_C_THRESHOLD 70
#define GRADE_B_THRESHOLD 80
#define GRADE_A_THRESHOLD 90

int main() 
{
    std::string number;
    int value = 0;
    // initialize value as an integer

    std::cout << "Please enter test score (0 - 100): \n";
    getline(std::cin,number);
    value = std::stoi(number);
    std::cout << "You grade is " << number <<std::endl;
    //cin -> character in
    //set user input to value
    if (value < GRADE_C_THRESHOLD)
    {
        std::cout << "Fail";
    } 
    else if (value < GRADE_B_THRESHOLD)
    {
        std::cout << "Pass: Grade C";
    } 
    else if (value < GRADE_A_THRESHOLD) 
    {
        std::cout << "Pass: Grade B";
    } 
    else 
    {
        std::cout << "Pass: Grade A";
    }
}
