#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>

int main () {
  std::vector<int> data{1,2,3};

  std::ostream_iterator<int> osi{std::cout, "\n"};

  std::ranges::copy(data, osi--);
}