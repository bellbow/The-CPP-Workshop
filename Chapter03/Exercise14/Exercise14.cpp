// Arrays exercise.
#include <iostream>
#include <string>

#define NAME_COUNT 5

int main()
{
  std::string names[NAME_COUNT];
  std::cout << "Please input usernames. \n";
  for (int i = 0; i < NAME_COUNT; ++i) {
    std::cout << "User " << i + 1 << ": ";
    std::getline(std::cin, names[i]);
  }

  bool bIsRunning = true;
  while (bIsRunning) {
    int userIndex = 0;
    std::string inputString;
    std::cout << "Enter user id to fetch or -1 to exit: ";
    getline(std::cin, inputString);
    userIndex = std::stoi(inputString);

    if (userIndex == -1) {
        bIsRunning = false;
    }

    else {
      if (userIndex >= 1 && userIndex < NAME_COUNT + 1) {
        std::cout << "User " << userIndex << ": " << names[userIndex - 1] << "\n";
      }

      else {
        std::cout << "Invalid user id\n";
      }
    }
  }

}
