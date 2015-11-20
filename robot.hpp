#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <vector>
#include "Point.hpp"
#include <cmath>

const double pi=3.1415926;

class Robot{
private:
	Point *curLoc;
    std::vector<Point*> htyLoc;
	int velocity;
	double direction;
public:
	Robot(int x=0,int y=0,int v=0,double d=0):velocity(v),direction(d){
		curLoc=new Point(x,y);
	}
	~Robot(){}
	int getV(){
		return velocity;
	}
	double getDirection(){
		return direction;
	}
	std::vector<Point*> getHistory(){
		return htyLoc;
	}
	Point getCur(){
		return *curLoc;
	}
	int historySize(){
		return htyLoc.size();
	}
	Point historyAt(int n){
		Point res=*htyLoc[n];
		return res;
	}
	void move(int r,double angle){
		int addx=r*cos(pi*angle/180);
        int addy=r*sin(pi*angle/180);
        htyLoc.push_back(curLoc);
        curLoc=new Point(curLoc->getX()+addx,curLoc->getY()+addy);
	}
};

#endif // ROBOT_HPP 