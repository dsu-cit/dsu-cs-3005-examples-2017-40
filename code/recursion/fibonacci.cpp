#include <iostream>

long int fib( int N ) {
  long int f;
  if( N <= 2 ) {
    f = 1;
  } else {
    f = fib( N - 1 ) + fib( N - 2 );
  }
  return f;
}

int main( ) {
  std::cout << "fib( 3 ) = " << fib( 3 ) << std::endl;
  std::cout << "fib( 5 ) = " << fib( 5 ) << std::endl;
  std::cout << "fib( 6 ) = " << fib( 6 ) << std::endl;
  std::cout << "fib( 7 ) = " << fib( 7 ) << std::endl;
  std::cout << "fib( 20 ) = " << fib( 20 ) << std::endl;
  std::cout << "fib( 30 ) = " << fib( 30 ) << std::endl;
  std::cout << "fib( 40 ) = " << fib( 40 ) << std::endl;
  std::cout << "fib( 50 ) = " << fib( 50 ) << std::endl;
  return 0;
}
