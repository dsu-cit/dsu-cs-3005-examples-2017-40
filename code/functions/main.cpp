#include <iostream>
#include <vector>
#include "counter.h"

int main( ) {

  // grab some letters
  std::vector< char > letters;
  letters.push_back( 97 );
  letters.push_back( 'e' );
  letters.push_back( 'i' );
  letters.push_back( 'o' );
  letters.push_back( 'u' );
  letters.push_back( 'g' );
  letters.push_back( 'k' );
  letters.push_back( 'o' );
  letters.push_back( '0' );

  int result;
  result = count_vowels( letters );
  std::cout << result << std::endl;

  result = count_vowels( &letters );
  std::cout << result << std::endl;

  int vc, nc;
  vc = -1;
  nc = -1;
  count_both( letters, vc, nc );
  std::cout << vc << std::endl;
  std::cout << nc << std::endl;

  std::pair< int, int > p;
  p = count_both( letters );
  std::cout << p.first << std::endl;
  std::cout << p.second << std::endl;

  return 0;
}
