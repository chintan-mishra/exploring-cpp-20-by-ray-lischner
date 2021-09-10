#include <iostream>
#include <ostream>

int main() {
  using namespace std;
  int quantity;
  cout << "Enter the quantity of numbers you want to sort: ";
  cin >> quantity;

  int nums[quantity];

  for (int i{1}; i <= quantity; i++) {
    cout << "Enter no. " << i << ": ";
    cin >> nums[i - 1];
  }

  for (int i{0}; i < quantity; i++) {
    int x{nums[i]};
    for (int j{i+1}; j < quantity; j++) {
      int y{nums[j]};
      if (x > y) {
        nums[j] = x;
        // 13 420 69 69420 42069 1729
        nums[i] = y;
        x = nums[i];
      }
    }
    cout << nums[i] << ' ';
  }
  cout << endl;
}