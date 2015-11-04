## this program intend to create a class robot, which contains multiple Nodes of the 
## robots' location, they all in a 400*400 bitmap, and they can move by inputing time
## Also it have a print function to print the bitmap.

/*
class Robot
	bool move(int,double,double); //move the index of num robot, return false if not exist
	void addRobot(); // add an Robot
	bool delRobot(int); //delete the robot that index of num, return false if not exist
	void timepass(int); //according to the time move all the robots
	void print(); //print the bitmap as ASCII characters