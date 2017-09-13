#include "Atom.h"
#include "Atom.h"

Atom::Atom( ) {
  mNumber = 0;
  mWeight = 0.0;
  mSymbol = "";
}

Atom::Atom( int n, double w, std::string s ) {
  mNumber = n;
  mWeight = w;
  mSymbol = s;
}


int Atom::getNumber( ) const {
  return mNumber;
}

double Atom::getWeight( ) const {
  return mWeight;
}

std::string Atom::getSymbol( ) const {
  return mSymbol;
}

bool Atom::setNumber( int n ) {
  bool r;

  if ( n >= 1 ) {
    mNumber = n;
    r = true;
  } else {
    r = false;
  }
  
  return r;
}

bool Atom::setWeight( double w ) {
  bool r;
  
  if ( w > 0.0 ) {
    mWeight = w;
    r = true;
  } else {
    r = false;
  }

  return r;
}

bool Atom::setSymbol( std::string s ) {
  bool r;

  if ( s.size( ) > 0 && s.size( ) <= 2 ) {
    mSymbol = s;
    r = true;
  } else {
    r = false;
  }

  return r;
}
