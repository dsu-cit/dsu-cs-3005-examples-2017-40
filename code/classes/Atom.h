#ifndef _ATOM_H_
#define _ATOM_H_

#include <string>

class Atom {

public:
  
  // default constructor
  Atom( );
  Atom( int n, double w, std::string s );

  int getNumber( ) const;
  double getWeight( ) const;
  std::string getSymbol( ) const;

  bool setNumber( int n );
  bool setWeight( double w );
  bool setSymbol( std::string s );

private:

  int mNumber;
  double mWeight;
  std::string mSymbol;
};

#endif /* _ATOM_H_ */
