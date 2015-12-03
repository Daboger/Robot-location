#include <iostream>
#include <fstream>
#include "Robot.hpp"
#include "World.hpp"
#include "Map.hpp"
#include "Point.hpp"
#include "Viewer.hpp"

using namespace std;


int main() {
	Map input("map.txt");  // read the data of map
	double t=0;
	cout<<"width and high"<<'\n';
	cout<<input.getW()<<'\t'<<input.getH()<<'\n';
	World workplant(input);
	ifstream file("Robots.txt"); // read the data of robots
	int num;
	file>>num;
	for(int i=0;i<num;i++){
		int x,y;
		double v;
		file>>x;
		file>>y;
		file>>v;
		workplant.addRobot(x,y,v);
	}
	cout<<"Number of Robots: "<<workplant.getSize()<<'\n';
	cout<<"Please input the time:"<<'\t';
	cin>>t;
	workplant.start(t);
	char* res="output.txt";
	Viewer v(workplant);
	v.print(res);
	v.toPostSc("postScript.ps");//creat postScript .ps to draw lines in ghostscript
	v.status();
}
