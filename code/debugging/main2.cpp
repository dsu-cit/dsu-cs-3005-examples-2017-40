#include <iostream>
#include <cmath>

double dist( double a, double b ) {
  double a2 = a * a;
  double b2 = b * b;
  double sum = a2 - b2;
  double d = std::sqrt( sum );
  return d;
}

int main( ) {
  double x, y;
  std::cout << "Double: ";
  std::cin >> x;
  std::cout << "Double: ";
  std::cin >> y;

  double distance = dist( x, y );

  std::cout << "Distance: " << distance << std::endl;
  
  return 0;
}
