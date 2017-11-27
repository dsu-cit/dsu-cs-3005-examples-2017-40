#include <iostream>

void use_memory( ) {
  int *ptr = new int[ 1000000 ];
  int i;
  for( i = 0 ; i < 35 ; i ++ ) {
    ptr[ i ] = i;
  }
  delete [] ptr;
  if( ptr[ 100 ] < 0 ) {
    std::cout << "less than" << std::endl;
  } else {
    std::cout << "not less than" << std::endl;
  }
  delete [] ptr;
}

int main( ) {
  int i = 0;
  while( i < 10 ) {
    use_memory( );
    i ++;
  }
  return 0;
}
