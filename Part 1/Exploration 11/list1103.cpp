#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>
#include <vector>

int main() {
  std::vector<int> data{};

  std::ranges::copy(std::ranges::istream_view<int>(std::cin),
                    std::back_inserter(data));

  auto left{ data.begin() };
  auto right{ data.end() };
  auto tmp{ *left };

  // std::ranges::copy(data, std::ostream_iterator<int>{std::cout, "\n"});

  for (auto start{ data.begin() }, end{ data.end() }; start != end; /*empty*/) {
    --end;
    if (start!= end) {
      std::iter_swap(start, end);
      ++start;
    }
  }

  std::ranges::copy(data, std::ostream_iterator<int>(std::cout, "\n"));
}