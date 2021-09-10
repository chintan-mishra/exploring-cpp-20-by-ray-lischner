#include <iostream>
#include <iomanip>

int main()
{
  using namespace std;

  cout << setfill('o') << setw(6) <<  42 << '\n';
  cout << left         << setw(6) <<  42 << '\n';
  cout <<                             42 << '\n';
  cout << setfill('-') << setw(4) << -42 << '\n';
}