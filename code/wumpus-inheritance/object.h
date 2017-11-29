#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object {
public:

  Object( int x, int y, char dc, char hc );
  int getX( ) const;
  int getY( ) const;
  char getDisplayChar( ) const;
  char getHintChar( ) const;
  
  virtual bool showAt( int x, int y ) const;
  virtual bool hintAt( int x, int y ) const;

protected:

  int mX, mY;
  char mDisplayChar, mHintChar;
  
};

class ObjectNear: public Object {
public:
  ObjectNear( int x, int y, char dc, char hc );
  virtual bool hintAt( int x, int y ) const;

protected:
};

#endif /* _OBJECT_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
