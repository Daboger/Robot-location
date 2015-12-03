#include "Map.hpp"
#include <fstream>

Map::Map(int w,int h){
	matrix=new int[w*h];
	for(int i=0;i<w*h;i++)
		matrix[i]=0;
	width=w;
	high=h;
}

Map::Map(const Map& orig){
	width=orig.width;
	high=orig.high;
	matrix=new int[width*high];
	for(int i=0;i<width*high;i++){
		matrix[i]=orig.matrix[i];
    }
}

Map::Map(char* filename){
	std::ifstream file(filename);
	file>>high>>width;
	matrix=new int[high*width]();
	for(int i=0;i<high*width;i++){
		file>>matrix[i];
	}
}
Map::~Map(){
	delete [] matrix;
}
Point Map::findNearRoad(const Point &p){
	if(judgeRoad(p)) return p;
	int distance=width+high;
	int dir=0; // 0=left, 1=right, 2=up, 3=down
	Point res;
	while(dir<4){
		Point tmp(p);
		int tmpD=0;
		while(getPoint(tmp)>0&&matrix[getPoint(tmp)]==0){
			switch(dir){
				case 0:
				tmp.decX();
				break;
				case 1:
				tmp.incX();
				break;
				case 2:
				tmp.incY();
				break;
				case 3:
				tmp.decY();
				break;
				default:
				break;
			}
			tmpD++;
		}
		if(tmpD<distance){
			distance=tmpD;
			res.set(tmp);
		}
		dir++;
	}
	return res;
}

bool Map::judgeRoad(const Point &p){
	if(getPoint(p)<0) return false;
	return matrix[getPoint(p)]!=0;
}

int Map::getW() const{
	return width;
}
int Map::getH() const{
	return high;
}
int Map::get(int x,int y) const{
	return matrix[getXY(x,y)];
}