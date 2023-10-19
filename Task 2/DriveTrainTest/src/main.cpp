/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Speedbot (Drivetrain, No Gyro)                            */
/*                                                                            */
/*    Name:                                                                   */
/*    Date:                                                                   */
/*    Class:                                                                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 10           
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

void drive() {
  Drivetrain.driveFor(100.00, vex::distanceUnits::cm);
  Drivetrain.turnFor(-45, vex::rotationUnits::deg);
  Drivetrain.driveFor(110.00, vex::distanceUnits::cm);
  Drivetrain.turnFor(-45, vex::rotationUnits::deg);
  Drivetrain.driveFor(100.00, vex::distanceUnits::cm);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  drive();
}
