#include "robot.hpp"
#include<cmath>
const double pi=3.1415926;

Robot::Robot(){
    
}
bool Robot::move(int num,double r,double angle){
    int addx=r*cos(pi*angle/180);
    int addy=r*sin(pi*angle/180);
    if(num!=-1) return -1;
    else
        return num+(addy*400+addx);
}

void Robot::addRobot(int x,int y,int v){
    
}
bool Robot::delRobot(int num){
    
}

int Robot::getXY(int x,int y){
    if(x<400&&y<400){
        return y*400+x;}
    else
        return -1;
    
}

void Robot::timepass(int seconds){
}

void Robot::print(){
    
}

