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


void Viewer::track(char* f){
	std::ofstream file(f);
	Map vm(content);
	for(int i=0;i<tracks.size();i++){
		vm.set(tracks[i],100);
	}
	for(int i=0;i<vm.getH();i++){
		for(int j=0;j<vm.getW();j++){
			file<<vm.get(j,i)<<'\t';
		}
		file<<'\n';
	}
}