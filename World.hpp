//Robot Location: Class World
// Author: Sicheng Liu & Shaobo Liu
//Class World contain the robots running on a given map.
//You can add a new robot, show its position and find the total number of them.
#ifndef WORLD_HPP
#define WORLD_HPP

#include <iostream>
#include "Point.hpp"
#include "Robot.hpp"
#include "Map.hpp"
#include <vector>

class World{
public:
	World(int width=400,int high=300);
	World(const Map& map);
	Point getRobot(int num) const; //return the robot current point
	std::vector<Point> getHisOf(int num) const;
	void addRobot(int x=0,int y=0,int v=0); //add Robot to World
	bool delRobot(int num); //delete the Robot that index of num, return false if not exist
	void start(double seconds=1);  //let all robot run for "seconds" seconds
	int getSize() const; //get the number of Robots
	Map getMap() const; 
private:
	std::vector<Robot> robots;
	Map m;
};

#endif // WORLD_HPP
