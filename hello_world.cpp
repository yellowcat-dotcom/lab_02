#include <iostream>
#include <string>
 
//комментарий
int main() {
  std::string name;
  std::cout << "Введите ваше имя: ";
  std::cin >> name;
  std::cout << "Hello world from @" << name << std::endl;
  return 0;
}