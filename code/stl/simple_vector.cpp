// vector is a linear collection of items
// it is defined in the Standard Template Library (STL)
#include <vector>
#include <cstdlib>
#include <iostream>

int main() {
  std::vector< int > nums;
  nums.push_back( 10 );
  nums.push_back( 13 );
  nums.push_back( 27 );
  nums.push_back( -32 );
  
  int largest = nums[ 0 ];
  size_t i;
  for ( i = 0 ; i < nums.size( ) ; i++ ) {
    if ( nums[ i ] > largest ) {
      largest = nums[ i ];
    }
  }

  std::cout << "Largest number is " << largest << "." << std::endl;
  std::cout << "Good bye." << std::endl;

  return 0;
}
