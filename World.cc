#include "World.hpp"
#include "Robot.hpp"

World::World(int width,int high){
	Map tmp(width,high);
	m=tmp;
}

World::World(const Map& map){
	m=map;
}



Point World::getRobot(int num) const{  // return the number num robot's current position
    if(num>robots.size()||num<0){
    	Point r(-1,-1);
    	return r;
    }
    return robots[num].getCur();
}

std::vector<Point> World::getHisOf(int num) const{  //return a vector of the number num robot's history
	if(num>robots.size()||num<0){
		std::vector<Point> r;
		return r;
	}
	return robots[num].getHistory();
}

void World::addRobot(int x,int y,int v){  // add a robot at the nearest road of (x,y) and velocity is v
    Point loc(x,y);
    Point nearR(m.findNearRoad(loc));
    Robot rob(nearR.getX(),nearR.getY(),v);
    robots.push_back(rob);
}

bool World::delRobot(int num){
	if(num>robots.size()||num<1) return false;
	robots.erase(robots.begin()+num-1);
	return true;
}

void World::start(double seconds){  // start all the robots for given time. If they get in touch with obstacles, they will turn right
/*
check crash or not and let the robot reflect when they touch the edge of field
*/
    Map virtualMap(m);
    for(double i=0;i<seconds;i+=0.1){
    	for(int j=0;j<robots.size();j++){
    		virtualMap.set(robots[j].getCur(),1);
    		while(!robots[j].run(0.1,Map m))
    			robots[j].turn();
    		virtualMap.set(robots[j].getCur());
    	}
    }
}

int World::getSize() const{
	return robots.size();
}

Map World::getMap() const{
	Map res(m);
	return res;
}
