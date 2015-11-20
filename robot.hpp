#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <vector>
#include "Point.hpp"
#include <cmath>

const double pi=3.1415926;

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
	int getV(){
		return velocity;
	}
	double getDirection(){
		return direction;
	}
	std::vector<Point> getHistory(){  //return the history points
		return htyLoc;
	}
	Point getCur(){
		return curLoc;
	}
	int historySize(){
		return htyLoc.size();
	}
	Point historyAt(int n){
		Point res=htyLoc[n];\
		return res;
	}
	void move(double r,double angle){  //move r distence and direction is angle 
		double addx=r*cos(angle);
        double addy=r*sin(angle);
        htyLoc.push_back(curLoc);
        curLoc.change(addx,addy);
	}
	void run(double time){  //accord present direction and velocity, go to the location after "time" seconds
		move(velocity*time,direction);
	}
};

#endif // ROBOT_HPP 