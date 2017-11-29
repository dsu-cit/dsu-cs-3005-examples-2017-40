#include "object.h"

Object::Object( int x, int y, char dc, char hc )
  : mX( x ), mY( y ) , mDisplayChar( dc ), mHintChar( hc ) {
  // empty
}

int Object::getX( ) const {
  return mX;
}

int Object::getY( ) const {
  return mY;
}

char Object::getDisplayChar( ) const {
  return mDisplayChar;
}

char Object::getHintChar( ) const {
  return mHintChar;
}

bool Object::showAt( int x, int y ) const {
  if( x == mX && y == mY ) {
    return true;
  } else {
    return false;
  }
}

bool Object::hintAt( int x, int y ) const {
  return false;
}

ObjectNear::ObjectNear( int x, int y, char dc, char hc )
  : Object( x, y, dc, hc ) {
  // empty
}

bool ObjectNear::hintAt( int x, int y ) const {
  if( x == mX && ( y == mY-1 || y == mY+1 ) ) {
    return true;
  } else if( y == mY && ( x == mX-1 || x == mX+1 ) ) {
    return true;
  } else {
    return false;
  }
}
