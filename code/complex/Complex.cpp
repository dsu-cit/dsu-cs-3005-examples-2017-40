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

Complex Complex::operator+( const double& rhs ) const {
  double x = mX + rhs;
  double y = mY;
  Complex c( x, y );
  return c;
}

Complex Complex::operator-( const Complex& rhs ) const {
  double x = mX - rhs.mX;
  double y = mY - rhs.mY;
  Complex c( x, y );
  return c;
}

Complex Complex::operator*( const Complex& rhs ) const {
  double x = mX * rhs.mX - mY * rhs.mY;
  double y = mX * rhs.mY + mY * rhs.mX;
  Complex c( x, y );
  return c;
}


double Complex::getX( ) const {
  return mX;
}

double Complex::getY( ) const {
  return mY;
}

Complex operator+( const double& lhs, const Complex& rhs ) {
  return rhs + lhs;
}

std::ostream& operator<<( std::ostream& os, const Complex& c ) {
  os << "(";
  os << c.getX( );
  os << ",";
  os << c.getY( );
  os << ")";
  return os;
}
