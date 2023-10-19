/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       poxley                                                    */
/*    Created:      10/13/2023, 11:24:45 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain Brain;

// define your global instances of motors and other devices here
vex::motor leftMotor = vex::motor(vex::PORT1);
vex::motor rightMotor = vex::motor(vex::PORT2);


int main() {

    Brain.Screen.printAt( 10, 50, "One Line Drive" );

    leftMotor.setVelocity(60, vex::velocityUnits::pct);
    rightMotor.setVelocity(70, vex::velocityUnits::pct);

    leftMotor.spin(vex::directionType::fwd);
    rightMotor.spin(vex::directionType::rev);

    this_thread::sleep_for(1000);
   
    while(1) {
        
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
