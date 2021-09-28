#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>
#include <vector>

int main() {
  std::vector<int> v{};

  std::ranges::copy(std::ranges::istream_view<int>(std::cin),
                    std::back_inserter(v));

  auto iter{v.begin()}, end{v.end()};

  for (; iter != end and *iter == 0; ++iter)
    /*empty*/;
  if (iter == end)
    std::cout << "data contains all zeroes\n";
  else
    std::cout << "data does not contain all zeroes\n";
}