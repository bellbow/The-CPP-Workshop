// Compare while and do/while
#include <iostream>

#include <string>

int main() {
  while (false) {
    std::cout << "The While Loop Says Hello World!";
  }

  do
    {
        std::cout << "The Do/While Loop Says Hello World!";
    }
    while (false);
  return 0;
}
