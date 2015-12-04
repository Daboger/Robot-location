#include "Viewer.hpp"

void Viewer::toPostSc(char* f) {//this part is to add postscript to draw lines the track of robots
	std::ofstream file(f);
	for (int i = 0; i<content.getH(); i++) {//the whole map
		int start = -1, end = 0;
		for (int j = 0; j<content.getW(); j++) {
			if (content.get(j, i) == 1) {
				if (start<0) {
					start = j;
					end = j;
				}
				else {
					end = j;
				}
				if (j == content.getW() - 1) {
					file << start << " " << i << " " << "moveto" << '\n';
					file << end << " " << i << " " << "lineto" << '\n';
				}
			}
			else if (start >= 0) {
				file << start << " " << i << " " << "moveto" << '\n';
				file << end << " " << i << " " << "lineto" << '\n';
				start = -1;
			}
		}
	}
	file << "stroke";
}