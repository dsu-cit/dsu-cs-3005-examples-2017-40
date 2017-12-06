#include <iostream>
#include <map>

long int fib( int N ) {
  long int f;
  if( N <= 2 ) {
    f = 1;
  } else {
    f = fib( N - 1 ) + fib( N - 2 );
  }
  return f;
}

long int fast_fib( int N, std::map< int, long int >& answers ) {
  long int f;
  if( answers.find( N ) != answers.end( ) ) {
    f = answers[ N ];
  } else if( N <= 2 ) {
    f = 1;
  } else {
    f = fast_fib( N - 1, answers ) + fast_fib( N - 2, answers );
    answers[ N ] = f;
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
  
  std::map< int, long int > answers;
  std::cout << "fib( 50 ) = " << fast_fib( 50, answers ) << std::endl;
  std::cout << "fib( 100 ) = " << fast_fib( 100, answers ) << std::endl;
  std::cout << "fib( 200 ) = " << fast_fib( 200, answers ) << std::endl;
  return 0;
}
