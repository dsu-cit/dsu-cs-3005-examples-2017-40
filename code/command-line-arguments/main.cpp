/* 
 * multiple two numbers
 * ./main 4 7
 * -> 28
 */
#include <iostream>
#include <sstream>

int c_string_to_int( const char *s ) {
  std::stringstream ss;
  ss.str( s );
  int x;
  ss >> x;
  return x;
}

int main( int argc, char **argv ) {

  // int i;
  // for( i = 0; i < argc; i ++ ) {
  //   std::cout << argv[ i ] << std::endl;
  // }
  if( argc >= 3 ) {
    int x = c_string_to_int( argv[ 1 ] );
    int y = c_string_to_int( argv[ 2 ] );
    std::cout << x << " * " << y << " = " << ( x * y ) << std::endl;
  } else {
    std::cout << "usage: " << argv[ 0 ] << " number number" << std::endl;
  }
  

  return 0;
}
