#include "file_io.h"
#include <fstream>
#include <iomanip>

void save_to_file( const std::string& filename, 
                   const char word[ ] ) {

  std::ofstream fout( filename, std::ios::binary );

  fout << word << std::endl;

  fout.close( );
}

void save_to_file( const std::string& filename, 
                   const int& v ) {
  std::ofstream fout( filename, std::ios::binary );

  fout << v << std::endl;

  fout.close( );
}

void write_to_file( const std::string& filename, 
                    const int& v ) {
  std::ofstream fout( filename, std::ios::binary );

  fout.write( (const char *)( &v ), sizeof( v ) );

  fout.close( );
}

void load_from_file( const std::string& filename, char word_space[ ] ) {

  std::ifstream fin( filename, std::ios::binary );

  fin >> word_space;
  
  fin.close( );
}

void load_from_file( const std::string& filename, int& v ) {

  std::ifstream fin( filename, std::ios::binary );

  fin >> v;
  
  fin.close( );
}

void read_from_file( const std::string& filename, int& v ) {
  
  std::ifstream fin( filename, std::ios::binary );

  fin.read( (char *)( &v ), sizeof( v ) );
  
  fin.close( );
}
