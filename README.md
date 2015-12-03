<h1>A Discription of this project</h1>
<body>this program intend to create a class robot, which contains multiple Nodes of the robots' location, they all in a bitmap, and they can move by inputing time Also it have a print function to print the bitmap. All the points that the robots have moved to will be recorded so we can print out the track of the robots</body>

<body>
class Robot<br>
*bitmap is a matrix which size is wide*high, the point without robot will be zeros. and the points have robot on it will be the label of the robot.

Our input is a matrix, in which 0 represents obstacles 1 represents roads, the Robot.txt is the input of robots:
/*
5
0 1 5
50 45 10
100 324 9
200 120 15
300 480 7
*/
first row means the number of robots, follows x, y, and velocity.

&nbsp;&nbsp;&nbsp;&nbsp;bool move(int,double,double); //move the index of num robot, return false if not exist<br>
&nbsp;&nbsp;&nbsp;&nbsp;void addRobot(); // add an Robot<br>
&nbsp;&nbsp;&nbsp;&nbsp;bool delRobot(int); //delete the robot that index of num, return false if not exist<br>
&nbsp;&nbsp;&nbsp;&nbsp;void start(double); //according to the time move all the robots, it should return "crash" when robot crash with other, and the robots will reflect when they touch the edge of bitmap<br>
&nbsp;&nbsp;&nbsp;&nbsp;void print(); //print the bitmap as ASCII characters<br>
&nbsp;&nbsp;&nbsp;&nbsp;void track(); //show the track of all the robots and line them up<br>

the output is also a matrix, in which 0 and 1 is the same, 255 means the robot, and 100 means the history locations.

class Point<br>
//This is a class that store the position of robots


	
</body>
