#include <vector>
#include <list>
#include <set>
#include <map>
#include <iostream>
#include <cstdlib>
#include <string>

int main( ) {

  std::vector< int > nums;
  nums.push_back( 1 );
  nums.push_back( 71 );
  nums.push_back( 167 );
  nums.push_back( 123 );

  size_t i;
  for( i = 0 ; i < nums.size( ) ; i++ ) {
    std::cout << nums[ i ] << std::endl;
  }
  
  const int ANUM_SIZE = 4;
  int anums[ ANUM_SIZE ];

  anums[ 0 ] = 1;
  anums[ 1 ] = 71;
  anums[ 2 ] = 167;
  anums[ 3 ] = 123;

  for( i = 0 ; i < ANUM_SIZE ; i++ ) {
    std::cout << anums[ i ] << std::endl;
  }
  
  int *element;
  for( element = &anums[ 0 ]; element != &anums[ ANUM_SIZE ]; element++ ) {
    std::cout << *element << std::endl;
  }

  std::vector< int >::iterator iter;
  for( iter = nums.begin( ); iter != nums.end( ); iter++ ) {
    std::cout << *iter << std::endl;
  }
  

  std::list< int > lnums;
  lnums.push_back( 1 );
  lnums.push_back( 71 );
  lnums.push_back( 167 );
  lnums.push_back( 123 );

  std::list< int >::iterator liter;
  for( liter = lnums.begin( ); liter != lnums.end( ); liter++ ) {
    std::cout << *liter << std::endl;
  }


  
  std::set< int > snums;
  snums.insert( 123 );
  snums.insert( 167 );
  snums.insert( 1 );
  snums.insert( 71 );
  snums.insert( 71 );
  snums.insert( 71 );

  std::set< int >::iterator siter;
  for( siter = snums.begin( ); siter != snums.end( ); siter++ ) {
    std::cout << *siter << std::endl;
  }
  
  std::map< std::string, int > mnums;
  mnums[ "fred" ] = 123;
  mnums[ "wilma" ] = 1;
  mnums[ "betty" ] = 71;
  mnums[ "barney" ] = 167;

  std::map< std::string, int >::iterator miter;
  for( miter = mnums.begin( ); miter != mnums.end( ); miter++ ) {
    std::cout << miter->first << " " << miter->second << std::endl;
    // (*miter).first  === miter->first
  }

  // for n in nums:
  return 0;
}
