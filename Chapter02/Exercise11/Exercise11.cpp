
#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>

int main()
{
  bool bIsRunning = true;
  std::string input = "";
  int count = 0;

  std::cout << "***Random Number Generator***\n";

  while (bIsRunning) {
    std::cout << "Pick how many numbers you want to generate or choose 0 to close: ";
    getline(std::cin,input);
    count = std::stoi(input);

    if (count == 0) {
      break;
    }

    srand((unsigned)time(0));
    for (int i = 0; i < count; ++i) {
      std::cout << rand() % 10;
      if (i == count - 1) {
        continue;
      }
      std::cout << ", ";
    }
    std::cout << "\n\n";
    }
}
