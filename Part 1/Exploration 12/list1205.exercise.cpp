#include <ios>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v0{1, 2, 3},
                   v1{2, 3, 4};

  bool b{v0 < v1};

  std::cout << std::boolalpha << b;
}