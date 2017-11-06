#include <iostream>
#include <vector>

template< class T, class S >
class MyContainer {
public:
  MyContainer( T x, S y );
  T getX( ) const;
  S getY( ) const;
protected:
  T mX;
  S mY;
private:
};

template< class T, class S >
MyContainer<T,S>::MyContainer( T x, S y )
  : mX( x ), mY( y ) {
  // empty
}

template< class T, class S >
T MyContainer<T,S>::getX( ) const {
  return mX;
}
template< class T, class S >
S MyContainer<T,S>::getY( ) const {
  return mY;
}

/*
class MyContainerInt {
public:
  MyContainerInt( int x, int y );
  int getX( ) const;
  int getY( ) const;
protected:
  int mX;
  int mY;
private:
};


MyContainerInt::MyContainerInt( int x, int y )
  : mX( x ), mY( y ) {
  // empty
}
int MyContainerInt::getX( ) const {
  return mX;
}
int MyContainerInt::getY( ) const {
  return mY;
}


class MyContainerDouble {
public:
  MyContainerDouble( double x, double y );
  double getX( ) const;
  double getY( ) const;
protected:
  double mX;
  double mY;
private:
};


MyContainerDouble::MyContainerDouble( double x, double y )
  : mX( x ), mY( y ) {
  // empty
}
double MyContainerDouble::getX( ) const {
  return mX;
}
double MyContainerDouble::getY( ) const {
  return mY;
}

*/

std::ostream& operator<<( std::ostream& os, const std::vector<char>& s) {
  size_t i;
  for( i = 0; i < s.size( ); i++ ) {
    os << s[ i ];
  }
  return os;
}

int main( ) {

  MyContainer< int, int > c( 3, -7 );
  std::cout << "Expected X: 3 " << c.getX( ) << std::endl;
  std::cout << "Expected Y: -7 " << c.getY( ) << std::endl;

  MyContainer< double, double > d( 3.12, -5.32 );
  std::cout << "Expected X: 3.12 " << d.getX( ) << std::endl;
  std::cout << "Expected Y: -5.32 " << d.getY( ) << std::endl;

  MyContainer< int, double > e( 3, -5.32 );
  std::cout << "Expected X: 3 " << e.getX( ) << std::endl;
  std::cout << "Expected Y: -5.32 " << e.getY( ) << std::endl;

  MyContainer< double, int > f( 3.12, 5 );
  std::cout << "Expected X: 3.12 " << f.getX( ) << std::endl;
  std::cout << "Expected Y: 5 " << f.getY( ) << std::endl;

  std::vector<char> z = { 'a', 'b', 'c' };
  MyContainer< std::vector<char>, int > g( z, 5 );
  std::cout << "Expected X: 3.12 " << g.getX( ) << std::endl;
  std::cout << "Expected Y: 5 " << g.getY( ) << std::endl;

  // char q[ 3 ] = { 'a', 'b', 'c' };
  // MyContainer< char[3], int > h( q, 5 );
  // std::cout << "Expected X: 3.12 " << h.getX( ) << std::endl;
  // std::cout << "Expected Y: 5 " << h.getY( ) << std::endl;
  
  return 0;
}
