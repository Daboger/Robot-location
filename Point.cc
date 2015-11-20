#include "Point.hpp"


Point::~Point(){

}
void Point::change(int x_,int y_){
	x+=x_;
	y+=y_;
}

void Point::set(int x_,int y_){
	x=x_;
	y=y_;
}
int Point::getX(){
	return x;
}
int Point::getY(){
	return y;
}