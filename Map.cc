#include "Map.hpp"
#include <fstream>

Map::Map(int w,int h){
	matrix=new int[w*h];
	width=w;
	high=h;
}

Map::Map(char* filename){

}
Map::~Map(){

}