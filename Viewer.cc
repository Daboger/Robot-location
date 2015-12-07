#include "Viewer.hpp"

void Viewer::printRobotAt(char* f,int num){
	std::ofstream file(f);
	Map vm(content);
	vm.set(posOfRobots[num]);
	for(int i=0;i<vm.getH();i++){
		for(int j=0;j<vm.getW();j++){
			file<<vm.get(j,i)<<'\t';
		}
		file<<'\n';
	}
}
void Viewer::print(char* f){
	std::ofstream file(f);
	Map vm(content);
	for(int i=0;i<posOfRobots.size();i++){
		vm.set(posOfRobots[i]);
	}
	for(int i=0;i<vm.getH();i++){
		for(int j=0;j<vm.getW();j++){
			file<<vm.get(j,i)<<'\t';
		}
		file<<'\n';
	}
}

void Viewer::toPostSc(char* f){//this part is to add postscript to draw lines the track of robots
	std::ofstream file(f);
	for(int i=0;i<content.getH();i++){//the whole map
		int start=-1,end=0;
		for(int j=0;j<content.getW();j++){
			if(content.get(j,i)==1){
				if(start<0){
					start=j;
				    end=j;
				}
				else{
					end=j;
				}
				if(j==content.getW()-1){
					file<<start<<" "<<i<<" "<<"moveto"<<'\n';
		    	    file<<end<<" "<<i<<" "<<"lineto"<<'\n';
				}
			}
		    else if(start>=0){
		    	file<<start<<" "<<i<<" "<<"moveto"<<'\n';
		    	file<<end<<" "<<i<<" "<<"lineto"<<'\n';
		    	start=-1;
		    }
		}
	}
	file<<"stroke";
}

void Viewer::track(char* f){
	std::ofstream file(f);
	for(int i=0;i<posOfRobots.size();i++){
		file<<tracks[i][0].getX()<<" "<<tracks[i][0].getY()<<" moveto"<<'\n';
		for(int j=0;j<tracks[i].size();j++){
			file<<tracks[i][j].getX()<<" "<<tracks[i][j].getY()<<" lineto"<<'\n';
		}
	}
	file<<"stroke";
}

void trackRobotAt(char* f,int num){
	if(num<0||num>=posOfRobots.size()) return;
	std::ofstream file(f);
	file<<tracks[num][0].getX()<<" "<<tracks[num][0].getY()<<" moveto"<<'\n';
	for(int i=0;i<tracks[num].size();i++){
		file<<tracks[num][j].getX()<<" "<<tracks[num][j].getY()<<" lineto"<<'\n';
	}
	file<<"stroke";
}