#ifndef VIEWER_HPP
#define VIEWER_HPP

#include "Robot.hpp"
#include "World.hpp"
#include <iostream>
#include <vector>

class Viewer{
private:
	World content;
public:
	Viewer(const World& orig){  //give a World and copy it.
		content=orig;
	}
	ostream& printRobotAt(ostream& s,int num); //print out the map and number num robot out
	ostream& print(ostream& s); // print out the map and all the robot current location
	ostream& trackRobotAt(ostream& s,int num); //print out the map and number num robot track
	ostream& track(ostream& s); // print out the track of all the robot
};

#endif  // VIEWER_HPP