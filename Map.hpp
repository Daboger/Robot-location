#ifndef MAP_HPP
#define MAP_HPP

#include "Point.hpp"

class Map{
private:
	int width,high;
	int *matrix;
public:
	Map(int w=400,int h=300); // create a 400*300 flat land;
	Map(char* filename); // creat a land according to this file, int 1 regard as road, and int 0 regard as obstacle
	Point findNearRoad(const Point &p); //find the nearest road, then return the point on the road
	bool judgeRoad(const Point &p); //return true if the point is on road, return false if not
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