#include "Robot.h"
#include <iostream>

Robot::Robot( )
  : mX( 0 ), mY( 0 ), mDir( 90 ) {
  // at origin, facing North
}

int Robot::getX( ) const {
  return mX;
}
int Robot::getY( ) const {
  return mY;
}
int Robot::getDir( ) const {
  return mDir;
}

void Robot::forward( ) {
  if( mDir == 0 ) {
    mX += 1;
  } else if( mDir == 90 ) {
    mY += 1;
  } else if( mDir == 180 ) {
    mX -= 1;
  } else if( mDir == 270 ) {
    mY -= 1;
  } else {
    std::cerr << "Oops!!!!" << std::endl;
  }
}

void Robot::turnLeft( ) {
  mDir += 90;
  mDir %= 360;
}
