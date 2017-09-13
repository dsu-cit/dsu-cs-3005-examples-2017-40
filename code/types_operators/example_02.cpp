#include <iostream>
/* int
 * double
 * float
 * bool  / true / false
 * void
 * char
 */ 

/* a + b
 * a - b
 * a * b
 * a / b
 * a % b  (REMAINDER)
 * a++    (post increment)
 * ++a    (pre increment)
 * a--
 * --a
 * a += b
 * a -= b
 * a *= b
 * a /= b
 * a %= b
 * ( a + b ) * c
 */

/* a > b
 * a < b
 * a >= b
 * a <= b
 * a == b
 * a != b
 *
 * ! ( a == b )             NOT
 * ( a > b ) && ( c < d )   AND
 * ( a > b ) || ( c < d )   OR
 */

int square( int x ) {
  return x * x;
}

int factorial( int n ) {
  int i;
  int value = 1;
  
  //for(init  ; test   ; increment ) {
  for ( i = 1 ; i <= n ; i++ ) {
    value *= i;
  }

  return value;
}

double bigger( double x, double y ) {
  double z;
  if ( x > y ) {
    z = x;
  } else if ( y > x ) {
    z = y;
  } else {
    z = 0.;
  }
  return z;
}

void hello_world( ) {
  // std::cout is an output stream.
  // << is the "output operator" or "stream insertion operator"
  std::cout << "Hello" << " " << "world" << "!" << std::endl;
  
  // blank line
  std::cout << std::endl;

  // another line of text.
  std::cout << "Class";
  std::cout << " ";
  std::cout << "is";
  std::cout << " ";
  std::cout << "almost";
  std::cout << " ";
  std::cout << "over";
  std::cout << ". :(";
  std::cout << std::endl;

  // another line of text.
  std::cout << "Class"
            << " "
            << "is"
            << " "
            << "almost"
            << " "
            << "over"
            << ". :("
            << std::endl;
}


int main() {
  std::cout << factorial( 6 ) << std::endl;
  std::cout << factorial( 16 ) << std::endl;
  std::cout << bigger( 3.14, 2.71 ) << std::endl;
  std::cout << bigger( 2.71, 3.14 ) << std::endl;
  std::cout << bigger( 3.14, 3.14 ) << std::endl;
  hello_world( );
  return 0;
}
