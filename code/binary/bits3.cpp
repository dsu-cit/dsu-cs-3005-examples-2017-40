#include <iostream>
#include <iomanip>
#include <cstdlib>

int main( ) {
  char c1 = 127;
  char c2 = 0xC4;
  unsigned char c3 = 127;
  unsigned char c4 = 0xC4;

  int i1 = c1;
  int i2 = c2;
  int i3 = c3;
  int i4 = c4;

  std::cout << c1 << " " << i1 << std::endl;
  std::cout << c2 << " " << i2 << std::endl;
  std::cout << c3 << " " << i3 << std::endl;
  std::cout << c4 << " " << i4 << std::endl;
  
  return 0;
}
