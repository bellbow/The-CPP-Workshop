#include <iostream>

#include <string>

int main() 
{
    int myVector[] {9,8,7,6,5};

    for (int i = 0; i < 5; ++i)
    //i = 0 initializes - makes starting point
    //i < 5 condition - ends when this is met
    //++i iteration expression - runs at end of each iteration to increment counter
    std::cout << i;

    for (int currentValue : myVector)
    {std::cout << std::endl << currentValue;};

}
