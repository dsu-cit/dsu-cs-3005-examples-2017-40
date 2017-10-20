#ifndef _VACUUMROBOT_H_
#define _VACUUMROBOT_H_

#include "Robot.h"

class VacuumRobot : public Robot {
public:
  VacuumRobot( );

  bool getStatus( ) const;

  void turnOn( );
  void turnOff( );

protected:
  bool mOn;

private:

};



#endif /* _VACUUMROBOT_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
