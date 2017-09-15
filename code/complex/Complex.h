#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include <iostream>

class Complex {
public:

  Complex( );
  Complex( double x, double y );
  // const Complex& rhs : don't change the right-hand-side
  // ...( ) const : don't change the left-hand-side
  Complex operator+( const Complex& rhs ) const;
  Complex operator+( const double& rhs ) const;
  Complex operator-( const Complex& rhs ) const;
  Complex operator*( const Complex& rhs ) const;

  double getX( ) const;
  double getY( ) const;

protected:
  
  double mX, mY;
  
};

Complex operator+( const double& lhs, const Complex& rhs  );
std::ostream& operator<<( std::ostream& os, const Complex& c );

#endif /* _COMPLEX_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
