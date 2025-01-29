//Hello world example.
#include <iostream>

#define HELLO "Hello World!"
int main() 
{
    #ifdef HELLO 
    std::cout << HELLO;
    #endif

    #undef HELLO
    
    #ifdef HELLO
    std::cout << HELLO;
    #endif
}
