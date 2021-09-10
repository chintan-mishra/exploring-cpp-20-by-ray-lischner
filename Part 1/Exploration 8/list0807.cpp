#include <iomanip>
#include <iostream>

int main() {
  using namespace std;

  for (int i{0}; i <= 11; i++) {
    if (i == 0) {
      cout << setw(5) << "*|";
    } else if (i == 1) {
      cout << setw(4) << setfill('-') << "";
    } else {
      cout << setw(4) << setfill(' ') << i - 1 << '|';
    }

    for (int j{1}; j <= 10; j++) {
      if (i == 0) {
        cout << setw(4) << j;
      } else if (i == 1) {
        if (j == 1) {
          cout << '+';
        }
        cout << setw(4) << setfill('-') << "";
      } else {
        cout << setw(4) << setfill(' ') << right << (i - 1) * j;
      }
    }
 
    cout << '\n';
  }
}