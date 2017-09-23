#include <iostream>
#include <iomanip>
#include <cstdlib>

int main( ) {
  int x = 0x785A6DFE;
  int mask = 0x000000FF;
  int a_byte =  x & mask;
  std::cout << x << " & " << mask << " = " << a_byte << std::endl;

  mask = 0x00FF0000;
  a_byte =  ( x & mask ) >> 16;
  std::cout << x << " & " << mask << " >> 16 = " << a_byte << std::endl;


  int a = 0x00AD00EF;
  int b = 0xDE00BE00;
  int c = a | b;
  std::cout << std::hex; // every integer will be displayed as hexadecimal from here on.
  std::cout << a << " | " << b << " = " << c << std::endl;

  float f = 3.14;
  std::cout << f << std::endl;
  
  

  

  
  return 0;
}
