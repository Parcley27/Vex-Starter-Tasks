/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       poxley                                                    */
/*    Created:      10/11/2023, 9:03:53 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/


#include "vex.h"
#include "iostream"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here


int main() {
    Brain.Screen.print("Hello, World!");
    Brain.Screen.newLine();
    Brain.Screen.print("This is on a new Line");

    this_thread::sleep_for(2500);

    Brain.Screen.printAt( 10, 50, "Hello V5" );
    Brain.Screen.clearScreen(color :: blue);
    Brain.Screen.setFillColor(color :: black);
    Brain.Screen.drawRectangle(40, 40, 400, 160);
    Brain.Screen.setFillColor(color :: black);
    Brain.Screen.printAt(190, 115, "Hello, Vex!");
    Brain.Screen.printAt(190, 130, "Press me...");

    while(1) {
        
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
