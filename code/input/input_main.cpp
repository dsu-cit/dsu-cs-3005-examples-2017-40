#include <iostream>

double readOne( std::istream& input_stream ) {
  double x = 1.0;

  input_stream >> x;

  if ( input_stream ) {
    std::cout << "input_stream is OK" << std::endl;
  } else {
    x = -1.0;
    std::cout << "DON'T TRUST X" << std::endl;
  }

  return x;
}

int  main( ) {
  double n = readOne( std::cin );
  std::cout << "YOUR NUMBER: " << n << std::endl;
  return 0;
}
