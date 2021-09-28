#include <iostream>

int main() {
  if (true)       std::cout << "04=true\n";
  if (false)      std::cout << "05=false\n";
  if (42)         std::cout << "06=42\n";
  if (0)          std::cout << "07=70\n";
  if (42.4242)    std::cout << "08=42.4242\n";
  if (0.0)        std::cout << "09=0.0\n";
  if (-0.0)       std::cout << "10=-0.0\n";
  if (-1)         std::cout << "11=-1\n";
  if ('\0')       std::cout << "12='\0'\n";
  if ('\1')       std::cout << "13='\1'\n";
  if ("1")        std::cout << "14=\"1\"\n";
  if ("false")    std::cout << "15=\"false\"\n";
  if (std::cout)  std::cout << "16=std::cout\n";
  if (std::cin)   std::cout << "17=std::cin\n";
}