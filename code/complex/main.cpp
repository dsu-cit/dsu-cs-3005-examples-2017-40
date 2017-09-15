#include "Complex.h"

int main( ) {
  // double x1 = -6.0;
  // double y1 = 1.75;
  Complex c1( -6.0, 1.75 );
  
  // double x2 = 2.25;
  // double y2 = -4.0;
  Complex c2( 2.25, -4.0 );

  // double x3 = x1 + x2;
  // double y3 = y1 + y2;
  Complex c3;
  // c3 = c1.operator+( c2 );
  c3 = c1 + c2;

  // operator<<( std::cout, c1 )
  std::cout << c1 << " + " << c2 << " = " << c3 << std::endl;
  
  double n = 32.2;
  c3 = c1 + n;
  c3 = n + c1;

  Complex c4;
  c4 = c1 - c2;
  std::cout << c1 << " - " << c2 << " = " << c4 << std::endl;

  Complex c5;
  c5 = c1 * c2;
  std::cout << c1 << " * " << c2 << " = " << c5 << std::endl;

  return 0;
};
