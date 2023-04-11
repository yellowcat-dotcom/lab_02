#include <iostream>
#include <string>

int main() {
  std::string name;
  std::cout << "input your name: ";
  std::cin >> name;
  std::cout << "Hello world from @" << name << std::endl;
  return 0;
}