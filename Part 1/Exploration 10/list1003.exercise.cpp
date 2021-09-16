#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>
#include <vector>

int main() {
  std::vector<int> data{};
  int x{};

  // while (std::cin >> x) {
  //   data.emplace_back(x);
  // }

  std::ranges::copy(std::ranges::istream_view,
                    std::back_inserter(data));

  std::ranges::sort(data);

  std::ranges::copy(data, std::ostream_iterator<int>{std::cout, "\n"});
}