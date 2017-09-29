#include "Todo.h"

Todo::Todo( )
  : mDescription( 0 ), mPriority( 1.0 ) {
  // mDescription = 0;  // the address 0, points to "nothing"
  // mPriority = 1.0;
}


bool Todo::setPriority( float priority ) {
  bool r;
  if ( priority >= 0.0 ) {
    mPriority = priority;
    r = true;
  } else {
    r = false;
  }
  return r;
}

float Todo::getPriority( ) const {
  return mPriority;
}
