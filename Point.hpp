#ifndef POINT_HPP
#define POINT_HPP

class Point{
private:
	int x;
	int y;
public:
	Point(int x_=0,int y_=0){
		x=x_;
		y=y_;
	}
	Point(const Point &orig){
		x=orig.x;
		y=orig.y;
	}
	~Point();
	void set(int x,int y);
	void change(int x,int y);
	int getX();
	int getY();
	friend bool operator==(const Point& a,const Point& b){
		if(a.x==b.x&&a.y==b.y) return true;
		return false;
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