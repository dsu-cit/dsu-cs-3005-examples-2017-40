#include <iostream>
#include <ctime>  // for std::time( )
#include <cstdlib> // for std::srand( ) and std::rand( )
#include "random_chooser.h"

int main( ) {
  // acquire a seed
  int seed = std::time( 0 );
  std::cout << seed << std::endl;
  
  // apply the seed
  std::srand( seed );
  
  // generate some random numbers
  int i;
  int how_many = 101;
  int smallest = 100;
  for ( i = 0 ; i < 10 ; i ++ ) {
    int r = choose_random( how_many, smallest );
    std::cout << "random: " << r << std::endl;
  }


  return 0;
}
