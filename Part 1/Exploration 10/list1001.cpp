#include <algorithm>
#include <cassert>
#include <vector>

int main() {
  std::vector<int> input{ 10, 20, 30 };
  std::vector<int> output{};
  output.resize(input.size());
  std::ranges::copy(input, output.begin());
  assert(input == output);
}