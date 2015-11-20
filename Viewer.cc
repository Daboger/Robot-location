#include "Viewer.hpp"
#include "Robot.hpp"


Viewer::Viewer(int width,int high){
    this->width=width;
    this->high=high;
}

Viewer::~Viewer(){

}

bool Viewer::move(int num,double r,double angle){
    if(num>robots.size()||num<0) return false;
    else{
    	robots[num].move(r,angle);
    	return true;
    }
}

void Viewer::addViewer(int x,int y,int v){
    
}
bool Viewer::delViewer(int num){
    
}

void Viewer::timepass(int seconds){
/*
check crash or not and let the robot reflect when they touch the edge of field
*/

}

void Viewer::track(){

}

void Viewer::print(){
    
}