// Classes/struct exercise.
#include <iostream>
#include <string>

class MyClass {
  public:
    int myInt = 0;
    bool myBool = false;
  
    std::string GetString() {
      return "Hello World";
    };
};

struct MyStruct {
int myInt = 0;
bool myBool = false;

std::string GetString() {
  return "Hello World";
  }
};

int main() {
  MyClass testClass;
  std::cout << testClass.myInt << std::endl;
  std::cout << testClass.myBool << std::endl;
  std::cout << testClass.GetString() << std::endl;

  MyStruct testStruct;
    std::cout << testStruct.myInt << std::endl;
  std::cout << testStruct.myBool << std::endl;
  std::cout << testStruct.GetString() << std::endl;
}