// Accessibility example.
#include <iostream>

#include <string>

class MyClass {
  //Public
  public:
    int myPublicInt = 0;
  //Protected
  protected:
    int myProtectedInt = 0;
  //Private
  private:
    int myPrivateInt = 0;
};

int main() {
  MyClass testClass;
  std::cout << testClass.myPublicInt << std::endl;
  std::cout << testClass.myProtectedInt << std::endl;
  std::cout << testClass.myPrivateInt << std::endl;
}