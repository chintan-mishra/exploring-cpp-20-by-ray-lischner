#include <iomanip>
#include <iostream>

int main()
{
  std::cout << " N    N^2    N^3\n";
  for (int i{1}; i != 21; ++i)
  {
    std::cout << " " << i << "    " << i*i << "    " << i*i*i << std::endl;
  }
}