<h1>A Discription of this project</h1>
<body>this program intend to create a class robot, which contains multiple Nodes of the robots' location, they all in a bitmap, and they can move by inputing time Also it have a print function to print the bitmap. All the points that the robots have moved to will be recorded so we can print out the track of the robots</body>

<body>
class Robot<br>
*bitmap is a matrix which size is wide*high, the point without robot will be zeros. and the points have robot on it will be the label of the robot.

&nbsp;&nbsp;&nbsp;&nbsp;bool move(int,double,double); //move the index of num robot, return false if not exist<br>
&nbsp;&nbsp;&nbsp;&nbsp;void addRobot(); // add an Robot<br>
&nbsp;&nbsp;&nbsp;&nbsp;bool delRobot(int); //delete the robot that index of num, return false if not exist<br>
&nbsp;&nbsp;&nbsp;&nbsp;void timepass(int); //according to the time move all the robots, it should return "crash" when robot crash with other, and the robots will reflect when they touch the edge of bitmap<br>
&nbsp;&nbsp;&nbsp;&nbsp;void print(); //print the bitmap as ASCII characters<br>
&nbsp;&nbsp;&nbsp;&nbsp;void track(); //show the track of all the robots and line them up<br>

class Point<br>
//This is a class that store the position of robots


	
</body>
