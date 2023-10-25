/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Mon Aug 24 2020                                           */
/*    Description:  Optical Sensing                                           */
/*                                                                            */
/*    This program will demonstrate how to use the Optical Sensor to          */
/*    report brightness, hue, and color information if an object is detected  */
/*    in its range                                                            */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 10           
// Optical2             optical       2               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
  // Print all Optical Sensor values to the screen forever
  while (true) {
    
    // Clear the screen and set cursor to top left corner
    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);

    // Check if anything is detected by the optical sensor nearby
    if (Optical2.isNearObject()) {

      // Get color from the optical sensor
      int color = Optical2.hue();
      // Colour the screen with the returned value
      Brain.Screen.clearScreen(color);

      // Display that an object has been detected
      Brain.Screen.print("Object Detected");
      Brain.Screen.newLine();
      
      // Display sensor brightness value
      Brain.Screen.print("Brightness: ");
      Brain.Screen.print("%.2f", Optical2.brightness());
      Brain.Screen.newLine();

      // Display sensor hue/color value
      Brain.Screen.print("Hue: ");
      Brain.Screen.print("%.2f", Optical2.hue());
      Brain.Screen.newLine();

    // Else if nothing is detected
    } else {
      // Display that nothing is detected
      Brain.Screen.print("No Object Detected");
    }

    // Give time for screen to update
    wait(0.25, seconds);
  }
}
