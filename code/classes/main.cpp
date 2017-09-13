#include "Atom.h"
#include <iostream>

int main( ) {

  Atom gold;
  Atom plutonium( 94, 244., "Pu" );

  gold.setNumber( 79 );
  gold.setWeight( 196.97 );
  gold.setSymbol( "Au" );
  
  // error because mNumber is private
  //gold.mNumber = -13;

  std::cout << "No.  " << gold.getNumber( ) << std::endl;
  std::cout << "Wgt. " << gold.getWeight( ) << std::endl;
  std::cout << "Sym. " << gold.getSymbol( ) << std::endl;

  return 0;
}
