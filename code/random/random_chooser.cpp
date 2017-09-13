#include <cstdlib> // for std::srand( ) and std::rand( )
#include "random_chooser.h"

int choose_random( int how_many, int smallest ) {
  int r = std::rand( );
  r = r % how_many;
  r = r + smallest;
  return r;
}
