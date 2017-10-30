#include <iostream>
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

void polymorphism_test( ) {
  Pit p( 2, 3 );
  Gold g( 2, 3 );

  std::vector< Object* > objects;
  objects.push_back( &p );
  objects.push_back( &g );
  size_t i;
  int x = 2, y = 3;
  for( y = 0 ; y < 4 ; y++ ) {
    for( x = 0 ; x < 4; x++ ) {
      std::cout << x << "," << y << ": ";
      for( i = 0 ; i < objects.size( ) ; i++ ) {
        if( objects[ i ]->showAt( x, y ) ) {
          std::cout << objects[ i ]->getDisplayChar( );
        }
        if( objects[ i ]->hintAt( x, y ) ) {
          std::cout << objects[ i ]->getHintChar( );
        }
      }
      std::cout << std::endl;
    }
  }
}

int main( ) {
  gold_test( );
  pit_test( );
  
  polymorphism_test( );
  
  return 0;
}
