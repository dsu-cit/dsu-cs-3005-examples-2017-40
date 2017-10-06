#include <fstream>
#include <iostream>
#include <string>


void read_header( std::istream& is ) {
  std::string s;
  is >> s;
  int w;
  is >> w;
  int h;
  is >> h;
  int m;
  is >> m;

  char nl;
  is >> std::noskipws  >> nl;

  std::cout << s << " " << w << " " << h << " " << m << std::endl;
  std::cout << '\n';
}

void read_and_display_one_byte( std::istream& is ) {

  unsigned char byte;
  is.read( ( char * ) &byte, 1 );
  if( !is ) {
    std::cout << "is is bad!" << std::endl;
  } else {
    int i = byte;
    std::cout << i << std::endl;
  }
}



int main( ) {
  std::ifstream fin( "demo.dat", std::ios::binary );
  read_header( fin );
  int i;
  for( i = 0 ; i < 11 ; i++ ) {
    read_and_display_one_byte( fin );
  }
  fin.close( );
  return 0;
}
