// #ifndef includes the lines that follow until the next #endif, if its symbol is not defined yet
#ifndef _FUNCS_H_
// #define defines/creates a symbol
#define _FUNCS_H_

// 0 == no debug
// 1 == light debug
// 2 == medium debug
// 3 == heavy debug
#ifndef DEBUG
#define DEBUG 0
#endif

//#define DEBUG_PRINT( msg )  { std::cout << msg << std::endl; }
#define DEBUG_PRINT( level, msg )  { if( DEBUG == level ) { std::cout << msg << std::endl; } }

int product( int a, int b );

// #endif terminates an #ifndef, #ifdef, #if 
#endif /* _FUNCS_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
