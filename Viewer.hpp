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
	ostream& printRobotAt(ostream& s,int num);
	ostream& print(ostream& s); // print out the map and all the robot current location
	ostream& track(ostream& s);
};

#endif  // VIEWER_HPP