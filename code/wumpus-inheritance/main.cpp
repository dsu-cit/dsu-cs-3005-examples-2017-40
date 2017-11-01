#include <iostream>
#include <sstream>
#include <vector>
#include "object.h"
#include "gold.h"
#include "pit.h"

void gold_test( ) {
  // Gold Test

  Gold g( 2, 3 );
  std::cout << "og: " << g.getOnGround( ) << std::endl;
  std::cout << "grab: " << g.grab( ) << std::endl;
  std::cout << "og: " << g.getOnGround( ) << std::endl;
  std::cout << "grab: " << g.grab( ) << std::endl;
  std::cout << "og: " << g.getOnGround( ) << std::endl;

  int x = 2, y = 3;
  std::cout << "showAt(" << x << "," << y << "): " << g.showAt( x, y ) << std::endl;
  x = 1; y = 4;
  std::cout << "showAt(" << x << "," << y << "): " << g.showAt( x, y ) << std::endl;

  x = 2; y = 3;
  std::cout << "hintAt(" << x << "," << y << "): " << g.hintAt( x, y ) << std::endl;
  x = 1; y = 4;
  std::cout << "hintAt(" << x << "," << y << "): " << g.hintAt( x, y ) << std::endl;
}

void pit_test( ) {
  // Pit Test

  Pit g( 2, 3 );
  
  int x = 2, y = 3;
  std::cout << "showAt(" << x << "," << y << "): " << g.showAt( x, y ) << std::endl;
  x = 1; y = 4;
  std::cout << "showAt(" << x << "," << y << "): " << g.showAt( x, y ) << std::endl;

  x = 2; y = 3;
  std::cout << "hintAt(" << x << "," << y << "): " << g.hintAt( x, y ) << std::endl;
  x = 1; y = 4;
  std::cout << "hintAt(" << x << "," << y << "): " << g.hintAt( x, y ) << std::endl;
  x = 2; y = 4;
  std::cout << "hintAt(" << x << "," << y << "): " << g.hintAt( x, y ) << std::endl;
  x = 1; y = 3;
  std::cout << "hintAt(" << x << "," << y << "): " << g.hintAt( x, y ) << std::endl;
}


std::string cell_string( const std::vector< Object* >& objects, int x, int y ) {

  std::stringstream sout;
  size_t i;

  for( i = 0 ; i < objects.size( ) ; i++ ) {
    if( objects[ i ]->showAt( x, y ) ) {
      sout << objects[ i ]->getDisplayChar( );
    }
    if( objects[ i ]->hintAt( x, y ) ) {
      sout << objects[ i ]->getHintChar( );
    }
  }
  while( sout.str( ).size( ) < 6 ) {
    sout << " ";
  }
  return sout.str( );
}


void polymorphism_test( ) {
  Pit p( 2, 3 ), q( 0, 3 ), r( 3, 1 );
  Gold g( 2, 3 );

  std::vector< Object* > objects;
  objects.push_back( &p );
  objects.push_back( &q );
  objects.push_back( &r );
  objects.push_back( &g );
  int x, y;
  std::cout << "+------+------+------+------+" << std::endl;
  for( y = 0 ; y < 4 ; y++ ) {
    std::string s = "|";
    for( x = 0 ; x < 4; x++ ) {
      s += cell_string( objects, x, y ) + "|";
    }
    std::cout << s << std::endl;
    std::cout << "+------+------+------+------+" << std::endl;
  }
}

int main( ) {
  gold_test( );
  pit_test( );
  
  polymorphism_test( );
  
  return 0;
}
