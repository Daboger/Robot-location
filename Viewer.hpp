// Author: Sicheng Liu & Shaobo Liu

//This Class is used to visualize Robot Position

#ifndef VIEWER_HPP
#define VIEWER_HPP

#include "Robot.hpp"
#include "World.hpp"
#include "Map.hpp"
#include "Point.hpp"
#include <fstream>
#include <vector>
#include <iostream>


class Viewer{
private:
	Map content;
	std::vector<Point> tracks;
	std::vector<Point> posOfRobots;
public:
	Viewer(const World& orig){  //give a World and copy it.
		content=orig.getMap();
		for(int i=0;i<orig.getSize();i++){
			posOfRobots.push_back(orig.getRobot(i));
			std::vector<Point> tmp=orig.getHisOf(i);
			for(int j=0;j<tmp.size();j++){
				tracks.push_back(tmp[j]);
			}
		}
	}
	void printRobotAt(char* f,int num); //print out the map and number num robot out
	void print(char* f); // print out the map and all the robot current location
//	void trackRobotAt(char* f,int num); //print out the map and number num robot track
	void track(char* f); // print out the track of all the robot
	void status(){
		cout<<"Positions: ";
		for(int i=0;i<posOfRobots.size();i++){
			cout<<posOfRobots[i]<<'\t';
		}
	}
};

#endif  // VIEWER_HPP
