#include <ios>
#include <iostream>

int main() {
  bool x{};

  std::cout << "Enter boolean true or false: ";
  std::cin >> std::boolalpha >> x;

  std::cout << "\n bool numerically = " << x
            << " and textually = " << std::boolalpha << x;
}