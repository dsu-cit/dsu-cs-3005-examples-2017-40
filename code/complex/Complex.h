#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex {
public:

  Complex( );
  Complex( double x, double y );
  // const Complex& rhs : don't change the right-hand-side
  // ...( ) const : don't change the left-hand-side
  Complex operator+( const Complex& rhs ) const;

protected:
  
  double mX, mY;
  
};

#endif /* _COMPLEX_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
