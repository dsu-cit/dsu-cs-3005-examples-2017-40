#include "Robot.h"
#include <iostream>

int main( ) {
  Robot robbie;

  robbie.forward( );
  robbie.forward( );
  robbie.forward( );
  robbie.turnLeft( );
  robbie.forward( );
  robbie.turnLeft( );
  robbie.turnLeft( );
  robbie.forward( );
  robbie.forward( );
  robbie.forward( );
  robbie.turnLeft( );
  robbie.forward( );
  robbie.forward( );

  std::cout << "X: " << robbie.getX( )
            << "  Y: " << robbie.getY( )
            << "  Dir: " << robbie.getDir( )
            << std::endl;

  return 0;
}
