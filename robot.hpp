#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
using namespace std;

class Robot{
public:
	Robot();
	bool move(int num,double r,double angle); //move the index of num robot, return false if not exist
	void addRobot(int x=0,int y=0,int v=0);
	bool delRobot(int num); //delete the robot that index of num, return false if not exist
	void timepass(int seconds=1);
	void print();
//	void track(); 
	
private:
    class Node{
    public:
    	int x;
	    int y;	
	    int velocity;
	    double direction;
	    Node(int x=0,int y=0,int v=0,double d=0):x(x),y(y),velocity(v),direction(d){
		}
		Node(const Robot::Node& p){
			x=p.x;
			y=p.y;
			velocity=p.velocity;
		}
	};
	Node *robots;
	int number;
	int getXY(int x,int y);
	int *bitmap;   //size is 400*400
};

#endif // ROBOT_H
