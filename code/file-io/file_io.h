#ifndef _FILE_IO_H_
#define _FILE_IO_H_
#include <string>

void save_to_file( const std::string& filename, 
                   const char word[ ] );

void save_to_file( const std::string& filename, 
                   const int& v );

void write_to_file( const std::string& filename, 
                    const int& v );

void load_from_file( const std::string& filename, char word_space[ ] );

void load_from_file( const std::string& filename, int& v );

void read_from_file( const std::string& filename, int& v );

#endif /* _FILE_IO_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
