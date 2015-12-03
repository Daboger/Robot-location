#include <fstream>

using namespace std;

int main(){
	char* filename="map.txt";
	ofstream file(filename);
	int rows=500,cols=500;
	file<<rows<<'\t'<<cols<<'\n';
	int rc=0,cc=0;
	for(int i=0;i<rows;i++){
		if(i==rows-2) rc=0;
		for(int j=0;j<cols;j++){
			if(j==0||j==cols-2) cc=0;
			if(rc==1||rc==0||cc==1||cc==0) file<<'1'<<'\t';
			else file<<'0'<<'\t';
			if(cc==20) cc=0;
			else cc++;
		}
		if(rc==20) rc=0;
		else rc++;
		file<<'\n';
	}
}