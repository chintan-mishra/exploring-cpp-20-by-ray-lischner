#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>
#include <vector>

int main() {
  std::vector<int> data{};
  int x{};

  std::ranges::copy(std::ranges::istream_view<int>(std::cin),
                    std::back_inserter(data));

  // std::ranges::sort(data);
  std::ranges::reverse(data);

  std::ranges::copy(data, std::ostream_iterator<int>{std::cout, "\n"});
  // std::ranges::unique_copy(data, std::ostream_iterator<int>{std::cout, "\n"});
}