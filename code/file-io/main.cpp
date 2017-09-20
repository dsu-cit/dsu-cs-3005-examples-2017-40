#include "file_io.h"
#include <iostream>

void make_files( ) {
  std::string filename = "words.txt";
  std::string ifilename = "ints.txt";
  std::string bfilename = "binary.dat";
  char word[ 6 ] = "hello";
  int x = 1234567890;

  save_to_file( filename, word );

  save_to_file( ifilename, x );

  write_to_file( bfilename, x );
}

void read_files( ) {
  std::string filename = "words.txt";
  char space_for_word[ 32 ];
  load_from_file( filename, space_for_word );
  std::cout << "word: " << space_for_word << std::endl;

  std::string ifilename = "ints.txt";
  int space_for_int = -1;
  load_from_file( ifilename, space_for_int );
  std::cout << "int: " << space_for_int << std::endl;

  std::string bfilename = "binary.dat";
  int space_for_other_int = -1;
  read_from_file( bfilename, space_for_other_int );
  std::cout << "int2: " << space_for_other_int << std::endl;

}

int main( ) {
  //make_files( );
  read_files( );
  return 0;
}
