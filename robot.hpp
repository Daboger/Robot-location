//Robot Location: Class Robot
// Author: Sicheng Liu & Shaobo Liu & Borui Xia
//This Class is used to show the robot status
#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <vector>
#include "Point.hpp"
#include "Map.hpp"
#include <cmath>

const double pi=3.141592653589793;

class Robot{
private:
	Point curLoc;
    std::vector<Point> htyLoc;
	int velocity;
	double direction;
public:
	Robot(int x=0,int y=0,int v=0,double d=0):velocity(v),direction(d){
		curLoc.change(x,y);
	}
	~Robot(){}
	int getV() const{
		return velocity;
	}
	double getDirection() const{
		return direction;
	}
	std::vector<Point> getHistory() const{  //return the history points
		return htyLoc;
	}
	Point getCur() const{ // return the current point
		return curLoc;
	}
	void turn(){ // turn right
		direction-=pi/2;
	}
	Point right(){ //return the right point
		Point res(curLoc);
		res.change((int)cos(direction-pi/2),(int)sin(direction-pi/2));
		return res;
	}
	int historySize() const{ // return the size of history
		return htyLoc.size();
	}
	Point historyAt(int n){  // get the history at n moment
		Point res=htyLoc[n];
		return res;
	}
	bool move(double r, double angle, Map* m) {  //move r distence and direction is angle
		double addx = r*cos(angle);
		double addy = -r*sin(angle);
		if (!m->judgeRoad(Point(curLoc.getX() + addx, curLoc.getY() + addy)))//insert the judgement before change direction
			return false;
		else {
			htyLoc.push_back(curLoc);
			curLoc.change(addx, addy);
			return true;
		}
	}
	bool run(double time,Map* m){  //accord present direction and velocity, go to the location after "time" seconds
		return move(velocity*time,direction,m);
	}
};

#endif // ROBOT_HPP 
