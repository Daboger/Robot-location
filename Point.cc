#include "Point.hpp"


Point::~Point(){

}
void Point::change(double x_,double y_){
	x+=x_;
	y+=y_;
}

void Point::set(double x_,double y_){
	x=x_;
	y=y_;
}
double Point::getX() const{
	return x;
}
double Point::getY() const{
	return y;
}
void Point::incX(){
	x++;
}
void Point::incY(){
	y++;
}
void Point::decX(){
	x--;
}
void Point::decY(){
	y--;
}