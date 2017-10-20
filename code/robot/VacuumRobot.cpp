#include "VacuumRobot.h"

VacuumRobot::VacuumRobot( )
  : Robot( ), mOn( false ) {
}

bool VacuumRobot::getStatus( ) const {
  return mOn;
}

void VacuumRobot::turnOn( ) {
  mOn = true;
}
void VacuumRobot::turnOff( ) {
  mOn = false;
}
