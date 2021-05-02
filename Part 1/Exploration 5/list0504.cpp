#include <iostream>
#include <string>

int main()
{
  std::cout << "What is your age? ";
  int age{};
  std::cin >> age;

  std::cout << "What is your name? ";
  std::string name{};
  std::cin >> name;

  std::cout << "Welcome, " << name << ". Your age is " << age << " years.";
}