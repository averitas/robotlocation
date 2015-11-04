
<body>this program intend to create a class robot, which contains multiple Nodes of the robots' location, they all in a 400*400 bitmap, and they can move by inputing time Also it have a print function to print the bitmap. </body>

<body>
class Robot<br>
	bool move(int,double,double); //move the index of num robot, return false if not exist<br>
	void addRobot(); // add an Robot<br>
	bool delRobot(int); //delete the robot that index of num, return false if not exist<br>
	void timepass(int); //according to the time move all the robots<br>
	void print(); //print the bitmap as ASCII characters<br>
	
</body>
