#ifndef VIEWER_HPP
#define VIEWER_HPP

#include <iostream>
#include "Point.hpp"
#include "Robot.hpp"
#include <vector>

using namespace std;

class Viewer{
public:
	Viewer(int width=400,int high=300);
	~Viewer();
	bool move(int num,double r,double angle); //move the index of num Viewer, return false if not exist
	void addViewer(int x=0,int y=0,int v=0);
	bool delViewer(int num); //delete the Viewer that index of num, return false if not exist
	void timepass(int seconds=1);
	void print();
	void track();
	
private:
	std::vector<Robot> robots;
	int high;
	int width;
};

#endif // VIEWER_HPP