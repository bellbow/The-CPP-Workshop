#include <iostream>
// define and use a function that will output the larger of two numbers. 
// This function will require a return type and two parameters.

int Max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int a;
    int b;

    std::cout << "Number 1: ";
    std::cin >> a;
    std::cout << "Number 2: ";
    std::cin >> b;

    std::cout << "The bigger number is " << Max(a,b);
}