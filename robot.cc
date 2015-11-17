#include "robot.hpp"
#include <cmath>
const double pi=3.1415926;

Robot::Robot(){
    
}

Robot::~Robot(){

}

bool Robot::move(int num,double r,double angle){
    int addx=r*cos(pi*angle/180);
    int addy=r*sin(pi*angle/180);
    robots[num].curLoc->change(addx,addy);
    if(num>number||num<0) return false;
    else
        return true;
}

void Robot::addRobot(int x,int y,int v){
    
}
bool Robot::delRobot(int num){
    
}

int Robot::getXY(int x,int y){
    if(x>=0&&x<wide&&y<high&&y>=0){
        return y*wide+x;}
    else
        return -1;
}

void Robot::timepass(int seconds){
}

void Robot::track(){

}

void Robot::print(){
    
}