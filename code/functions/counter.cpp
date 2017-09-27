#include "counter.h"
#include <cstdlib>

// int count_vowels( std::vector< char > v ) {
//   size_t i;
//   int count = 0;
//   for( i = 0; i < v.size( ); i++ ) {
//     if( v[ i ] == 'a' || v[ i ] == 'e' ||
//         v[ i ] == 'i' || v[ i ] == 'o' ||
//         v[ i ] == 'u' ) {
//       count++;
//     }
//   }
//   return count;
// }

int count_vowels( std::vector< char >& v ) {
  size_t i;
  int count = 0;
  for( i = 0; i < v.size( ); i++ ) {
    if( v[ i ] == 'a' || v[ i ] == 'e' ||
        v[ i ] == 'i' || v[ i ] == 'o' ||
        v[ i ] == 'u' ) {
      count++;
    }
  }
  return count;
}

int count_vowels( std::vector< char >* v ) {
  size_t i;
  int count = 0;
  for( i = 0; i < v->size( ); i++ ) {
    if( (*v)[ i ] == 'a' || (*v)[ i ] == 'e' ||
        (*v)[ i ] == 'i' || (*v)[ i ] == 'o' ||
        (*v)[ i ] == 'u' ) {
      count++;
    }
  }
  return count;
}

void count_both( std::vector< char >& v, int& num_vowels, int& num_consonants ) {
  size_t i;
  num_vowels = 0;
  num_consonants = 0;
  for( i = 0; i < v.size( ); i++ ) {
    if( v[ i ] == 'a' || v[ i ] == 'e' ||
        v[ i ] == 'i' || v[ i ] == 'o' ||
        v[ i ] == 'u' ) {
      num_vowels++;
    } else if( v[ i ] >= '0' && v[ i ] <= '9' ) {
      // skip
    } else {
      num_consonants++;
    }
  }
  return;
}

std::pair< int, int > count_both( std::vector< char >& v ) {
  size_t i;
  std::pair< int, int > p;
  p.first = 0;
  p.second = 0;
  for( i = 0; i < v.size( ); i++ ) {
    if( v[ i ] == 'a' || v[ i ] == 'e' ||
        v[ i ] == 'i' || v[ i ] == 'o' ||
        v[ i ] == 'u' ) {
      p.first++;
    } else if( v[ i ] >= '0' && v[ i ] <= '9' ) {
      // skip
    } else {
      p.second++;
    }
  }
  return p;
}
