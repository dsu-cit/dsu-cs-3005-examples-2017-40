#include <iostream>

int factorial( int N ) {
  int f;

  if( N <= 1 ) {
    f = 1;
  } else {
    f = N * factorial( N - 1 );
  }

  return f;
}


int main( ) {
  
  std::cout << "3! = " << factorial( 3 ) << std::endl;
  std::cout << "4! = " << factorial( 4 ) << std::endl;
  std::cout << "7! = " << factorial( 7 ) << std::endl;

  return 0;
}
