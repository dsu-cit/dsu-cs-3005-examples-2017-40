/*
 * Bits:
 * 0 or 1, off or on, false or true
 * 
 * 2 Bits: 2^2 = 4 combinations
 * 00
 * 01
 * 10
 * 11
 *
 * 4 Bits: 2^4 = 16 combinations  (Hexadecimal)
 * 0000 = 0
 * 0001 = 1
 * 0010 = 2
 * 0011 = 3
 * 0100 = 4
 * 0101 = 5
 * 0110 = 6
 * 0111 = 7
 * 1000 = 8
 * 1001 = 9
 * 1010 = A
 * 1011 = B
 * 1100 = C
 * 1101 = D
 * 1110 = E
 * 1111 = F
 *
 * 0x785A6DFE
 *
 */
#include <iostream>
#include <cstdlib>

int main( ) {
  int x = 0x785A6DFE;
  int y = 2019192318;
  
  std::cout << x << std::endl;
  std::cout << y << std::endl;

  int z = 0x985A6DFE;
  unsigned int a = 0x985A6DFE;
  std::cout << z << std::endl;
  std::cout << a << std::endl;

  float f = 0;
  *((unsigned int *)(&f)) = 0x985A6DFE;
  std::cout << f << std::endl;
  
  return 0;
}
