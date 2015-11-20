#include "World.hpp"
#include "Robot.hpp"

World::World(){

}

World::World(int width,int high){
}

World::~World(){

}

Robot* World::getRobot(int num){
    if(num>robots.size()||num<0) return nullptr;
    return &robots[num];
}

void World::addRobot(int x,int y,int v){
    
}
bool World::delRobot(int num){
    
}

void World::start(int seconds){
/*
check crash or not and let the robot reflect when they touch the edge of field
*/

}

int World::getSize(){
	return robots.size();
}