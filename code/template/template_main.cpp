#include <iostream>

template< class T, class S >
T find_minimum( T x, S y ) {
  T r;
  if( x < y ) {
    r = x;
  } else {
    r = y;
  }
  return r;
}

/*
int find_minimum( int x, int y ) {
  int r;
  if( x < y ) {
    r = x;
  } else {
    r = y;
  }
  return r;
}

double find_minimum( double x, double y ) {
  double r;
  if( x < y ) {
    r = x;
  } else {
    r = y;
  }
  return r;
}
*/

int main( ) {
  
  int a = 5, b = 7;

  int min_i = find_minimum( a, b );
  std::cout << "Expect 5: " << min_i << std::endl;
  min_i = find_minimum( b, a );
  std::cout << "Expect 5: " << min_i << std::endl;


  double c = 5.34, d = 3.12;
  double min_d = find_minimum( c, d );
  std::cout << "Expect 3.12: " << min_d << std::endl;
  min_d = find_minimum( d, c );
  std::cout << "Expect 3.12: " << min_d << std::endl;

  min_d = find_minimum( d, b );
  std::cout << "Expect 3.12: " << min_d << std::endl;
  min_d = find_minimum( b, d );
  std::cout << "Expect 3.12: " << min_d << std::endl;

  return 0;
}
