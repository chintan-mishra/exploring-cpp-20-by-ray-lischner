#include <iomanip>
#include <iostream>

int main()
{
  using namespace std;

  int day{14};
  int month{3};
  int year{2006};
  int dollars{42};
  int cents{7};

  cout << "Date: " << setfill('0') << setw(2) << month
                            << '/' << setw(2) << day
                            << '/' << setw(2) << year << '\n';
}