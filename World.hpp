#ifndef WORLD_HPP
#define WORLD_HPP

#include <iostream>
#include "Point.hpp"
#include "Robot.hpp"
#include "Map.hpp"
#include <vector>

using namespace std;

class World{
public:
	World();
	World(int width=400,int high=300);
	World& operator=(const World& orig){
		if(this!=&orig){
			m=orig.m;
			robots=orig.robots;
		}
		return *this;
	}
	~World();
	Robot* getRobot(int num); //return the robot
	void addRobot(int x=0,int y=0,int v=0); //add Robot to World
	bool delRobot(int num); //delete the Robot that index of num, return false if not exist
	void start(int seconds=1);  //let all robot run for "seconds" seconds
	int getSize(); //get the number of Robots
	
private:
	std::vector<Robot> robots;
	Map m;
};

#endif // WORLD_HPP