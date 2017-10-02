#include <iostream>
#include "Todo.h"

int main( ) {

  // Todo t0( "Pick up milk.", 1.0 );
  // Todo t1( "Grade homework assignment 1." );
  Todo t2;

  t2.setDescription( "Write AI to sort TODOs." );
  t2.setPriority( 2.3 );
  // t0.bumpPriority( 0.2 );

  std::cout << t2.getPriority( ) << std::endl;
  // will crash if mDescription = 0
  // char c = t2.getDescription()[ 0 ];
  // std::cout << c << std::endl;
  std::cout << t2.getDescription( ) << std::endl;
  
  // std::cout << t0.getDescription( ) << " " << t0.getPriority( ) << std::endl;
  // std::cout << t1 << std::endl;

  Todo t3( t2 );

  // t2 = t0;

  // std::cout << t0 << std::endl;
  // std::cout << t1 << std::endl;
  // std::cout << t2 << std::endl;
  // std::cout << t3 << std::endl;

  return 0;
}
