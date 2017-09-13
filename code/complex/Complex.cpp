#include "Complex.h"

Complex::Complex( )
  : mX( 0.0 ), mY( 0.0 ) {
}

Complex::Complex( double x, double y ) {
  mX = x;
  mY = y;
}

Complex Complex::operator+( const Complex& rhs ) const {
  double x = mX + rhs.mX;
  double y = mY + rhs.mY;
  Complex c( x, y );
  return c;
}
