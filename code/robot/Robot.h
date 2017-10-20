#ifndef _ROBOT_H_
#define _ROBOT_H_

class Robot {
public:

  Robot( );
  int getX( ) const;
  int getY( ) const;
  int getDir( ) const;

  void forward( );
  void turnLeft( );

protected:
  int mX;
  int mY;
  int mDir;

};



#endif /* _ROBOT_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
