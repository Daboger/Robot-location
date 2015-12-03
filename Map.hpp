//this class includes information about map, in this map, 0 is obstacle, 1 is road,255 is the location of the car. there are 3 constraction function. if only input w, h, there will be a 400*300 flat land. if input filename, there will be a map according to the information(judgeroad), judge whether the points are a road.Point findNearRoad is a way to find the nearest road.

#ifndef MAP_HPP
#define MAP_HPP

#include "Point.hpp"
#include <fstream>

class Map{
private:
	int width,high;
	int *matrix;
	int getPoint(const Point& p) const{
		if(p.getX()<0||p.getX()>=width||p.getY()<0||p.getY()>=high) return -1;
		return (int)p.getX()+(int)p.getY()*width;
	}
	int getXY(int x,int y) const{
		if(x<0||x>=width||y<0||y>=high) return -1;
		return x+y*width;
	}
public:
	Map(int w=400,int h=300); // create a 400*300 flat land;
	Map(const Map& orig);
	Map(char* filename); // creat a land according to this file, int 1 regard as road, and int 0 regard as obstacle
	Point findNearRoad(const Point &p); //find the nearest road, then return the point on the road
	bool judgeRoad(const Point &p); //return true if the point is on road, return false if not
	void set(const Point& p,int value=255){
		if(getPoint(p)<0) return;
		matrix[getPoint(p)]=value;
	}
	int getW() const; // get the width
	int getH() const; // get the high
	int get(int x,int y) const; // get the value on (x,y)
	~Map(); // delete matrix
	Map& operator=(const Map& orig){
	    if(this!=&orig){
		    width=orig.width;
		    high=orig.high;
		    delete [] matrix;
		    matrix=new int[width*high];
		    for(int i=0;i<width*high;i++){
			    matrix[i]=orig.matrix[i];
		    }
	    }
	    return *this;
    }
};

#endif