#ifndef _GOLD_H_
#define _GOLD_H_

#include "object.h"

class Gold : public Object {

public:
  
  Gold( int x, int y );

  bool getOnGround( ) const;
  bool grab( );

  virtual bool showAt( int x, int y ) const;
  virtual bool hintAt( int x, int y ) const;

protected:

  bool mOnGround;

};

#endif /* _GOLD_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
