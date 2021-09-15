#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> data{};
  int x{};

  while (std::cin >> x) {
    data.emplace_back(x);
  }

  std::ranges::sort(data);

  for (int element : data) {
    std::cout << element << '\n';
  }
}