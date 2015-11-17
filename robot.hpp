#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <iostream>
#include "Point.hpp"
using namespace std;

class Robot{
public:
	Robot();
	~Robot();
	bool move(int num,double r,double angle); //move the index of num robot, return false if not exist
	void addRobot(int x=0,int y=0,int v=0);
	bool delRobot(int num); //delete the robot that index of num, return false if not exist
	void timepass(int seconds=1);
	void print();
	void track();
	
private:
    class Node{
    public:
    	Point *curLoc;
    	Point *htyLoc;
	    int velocity;
	    double direction;
	    Node(int x,int y,int v=0,double d=0):velocity(v),direction(d){
		}
		Node(const Node& p){
			curLoc=new Point(p.curLoc);
			velocity=p.velocity;
			direction=p.direction;
		}
	};
	Node *robots;
	int number;
	int getXY(int x,int y);
	int wide,high;
	int *bitmap;   //size is wide*high
};

#endif // ROBOT_H
