#include "maze.h"
#include "robot.h"
#include "randomRobot.h"
#include <iostream>

using namespace std;

int main()
{
	Maze lab;
	lab.read();

	RandomRobot r(lab);

	r.move(lab);
	cout << "1. row: " << r.get_current_row() << ", col: " << r.get_current_col() << endl;

	r.move(lab);
	cout << "2. row: " << r.get_current_row() << ", col: " << r.get_current_col() << endl;

	r.move(lab);
	cout << "3. row: " << r.get_current_row() << ", col: " << r.get_current_col() << endl;

}