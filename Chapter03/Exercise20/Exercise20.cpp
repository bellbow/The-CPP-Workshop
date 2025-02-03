#include <iostream>
void MyFunc()
 {
  int myInt1 = 1;
 }
 // scope 1
 int main()
 {
  int myInt2 = 2;
 // scope 2
 {
  int myInt3 = 3;
 // scope 3
 }

 std::cout << myInt1;
 std::cout << myInt2;
 std::cout << myInt3;
 }

