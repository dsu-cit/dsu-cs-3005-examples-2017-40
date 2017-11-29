// preprocessor directives start with #
// #include <name>
// includes a file as if it were typed here.
// with <> system-level files are searched
#include <iostream>
// with "" project-level files are searched
#include "funcs.h"
// multiple inclusion is generally protected by #ifndef statements
#include "funcs.h"

int main( ) {
  
  int x = product( 12, 15 );

  std::cout << x << std::endl;
  std::cout << product( -3, -4 ) << std::endl;
  std::cout << product( 3, -4 ) << std::endl;
  std::cout << product( -3, 4 ) << std::endl;
  std::cout << product( 3, 4 ) << std::endl;

  return 0;
}
