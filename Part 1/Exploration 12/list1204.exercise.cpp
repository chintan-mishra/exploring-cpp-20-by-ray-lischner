#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{1, 2,3};

  if (v) {
    std::cout << "vectors are converted to bool";
  } else {
    std::cout << "vectors are not converted to bool";
  }
}