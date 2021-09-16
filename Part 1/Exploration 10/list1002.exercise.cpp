#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>

int main() {
  std::vector<int> data{};
  int x{};

  while (std::cin >> x) {
    data.emplace_back(x);
  }

  std::ranges::sort(data);

  std::ranges::copy(data, std::ostream_iterator<int>{std::cout});

  // for (int element : data) {
  //   std::cout << element << '\n';
  // }
}