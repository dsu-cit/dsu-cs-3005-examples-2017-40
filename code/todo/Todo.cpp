#include "Todo.h"
#include <cstring>

Todo::Todo( )
  : mDescription( 0 ), mPriority( 1.0 ) {
  // mDescription = 0;  // the address 0, points to "nothing"
  // mPriority = 1.0;
}

Todo::Todo( const Todo& src ) 
  : mDescription( 0 ), mPriority( src.mPriority ) {
  setDescription( src.mDescription );
}


bool Todo::setDescription( const char *description ) {
  bool r;
  if( description != 0 ) {
    mDescription = new char[ std::strlen( description ) + 1 ];
    std::strcpy( mDescription, description );
    r = true;
  } else {
    r = false;
  }
  return r;
  // int i;
  // for( i = 0 ; i < std::strlen( description ) ; i ++ ) {
  //   mDescription[ i ] = description[ i ];
  // }
  // mDescription[ i ] = 0;
}

const char* Todo::getDescription( ) const {
  return mDescription;
}

bool Todo::setPriority( float priority ) {
  bool r;
  if ( priority >= 0.0 ) {
    mPriority = priority;
    r = true;
  } else {
    r = false;
  }
  return r;
}

float Todo::getPriority( ) const {
  return mPriority;
}
