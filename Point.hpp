#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

using namespace std;

class Point{
private:
	double x;
	double y;
public:
	Point(double x_=0,double y_=0){
		x=x_;
		y=y_;
	}
	Point(const Point &orig){
		x=orig.x;
		y=orig.y;
	}
	~Point();
	void set(double x,double y);
	void set(const Point &orig){
		x=orig.x;
		y=orig.y;
	}
	void change(double x,double y);
	double getX() const;
	double getY() const;
	void incX();
	void incY();
	void decX();
	void decY();
	friend bool operator==(const Point& a,const Point& b){
		if(a.x==b.x&&a.y==b.y) return true;
		return false;
	}
	friend ostream& operator<<(ostream& s, const Point &p) {
		s<<'('<<p.x<<','<<p.y<<')';
		return s;
	}
/*
	Point& operator=(const Point& orig){
		if(this!=&orig){
			x=orig.x;
			y=orig.y;
		}
		return *this;
	}
*/
};

#endif // POINT_HPP
