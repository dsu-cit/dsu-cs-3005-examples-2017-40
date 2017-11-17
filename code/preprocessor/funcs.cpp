#include <iostream>
#include "funcs.h"

int product( int a, int b ) {
  int result = a * b;
  
  DEBUG_PRINT( 1, a << " * " << b << " = " << result );
  
  DEBUG_PRINT( 2, "int product( int a, int b )" );
  DEBUG_PRINT( 2, "a = " << a );
  DEBUG_PRINT( 2, "b = " << b );
  DEBUG_PRINT( 2, "return = " << result );
  
  return result;
}

