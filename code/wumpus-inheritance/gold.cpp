#include "gold.h"

Gold::Gold( int x, int y )
  : Object( x, y, '\0', 'G' ), mOnGround( true ) {
  // empty
}

bool Gold::getOnGround( ) const {
  return mOnGround;
}

bool Gold::grab( ) {
  if( mOnGround ) {
    mOnGround = false;
    return true;
  } else {
    return false;
  }
}

bool Gold::showAt( int x, int y ) const {
  return false;
}

bool Gold::hintAt( int x, int y ) const {
  if( x == mX && y == mY ) {
    return true;
  } else {
    return false;
  }
}
