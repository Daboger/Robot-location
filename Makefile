RobotLocation.exe: main.o Map.o Viewer.o Point.o World.o
	g++ main.o Map.o Viewer.o Point.o World.o -o RobotLocation.exe

main.o: main.cc
	g++ -c main.cc

Map.o: Map.cc
	g++ -c Map.cc

Map.cc: Map.hpp
	touch Map.cc

Point.o: Point.cc
	g++ -c Point.cc

Point.cc: Point.hpp
	touch Point.cc

Viewer.o: Viewer.cc
	g++ -c Viewer.cc

Viewer.cc: Viewer.hpp
	touch Viewer.cc

World.o: World.cc
	g++ -c World.cc

World.cc: World.hpp
	touch World.cc

main.cc: Map.hpp Point.hpp Viewer.hpp World.hpp
	touch main.cc
