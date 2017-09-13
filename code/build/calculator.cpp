#include <iostream>
#include <string>

void show_prompt( ) {
  std::cout << "calc: ";
}

double add( double x, double y ) {
  return x + y;
}

double sub( double x, double y ) {
  return x - y;
}

void process_expression( ) {
  double      x;
  std::string op;
  double      y;
  std::cin >> x;
  std::cin >> op;
  std::cin >> y;

  double z;
  if ( op == "+" ) {
    z = add( x , y );
  } else if ( op == "-" ) {
    z = sub( x , y );
  } else {
    std::cout << op << " is not recognized." << std::endl;
  }
  std::cout << z << std::endl;
}

int main( ) {
  show_prompt( );
  process_expression( );
  show_prompt( );
  return 0;
}
