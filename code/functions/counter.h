#ifndef _COUNTER_H_
#define _COUNTER_H_
#include <vector>
#include <utility>

/* pass by value ( entire vector is copied ) */
// int count_vowels( std::vector< char > v );

/* pass by reference ( the original is used in the function, no copy is made: more efficient ) */
int count_vowels( std::vector< char >& v );

/* pass by pointer ( the address of the original is used in the function, no copy is made: more efficient ) */
int count_vowels( std::vector< char >* v );


/* return by reference */
void count_both( std::vector< char >& v, int& num_vowels, int& num_consonants );

/* return by object */
std::pair< int, int > count_both( std::vector< char >& v );

#endif /* _COUNTER_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
