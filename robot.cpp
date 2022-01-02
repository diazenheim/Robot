#include <iostream>
#include "maze.h"
#include "robot.h"
#include <stdexcept>
#include <cstdlib> //for absolute value

using namespace std;


Robot::Robot(Maze& maze)
{
	unsigned int start_row, start_col;
	maze.find_start(start_row, start_col);
	
	current_row = start_row; 
	current_col = start_col;
}

void Robot::move(Maze& maze)  // 0 - valid; 1 - invalid; 2 - exit
{	
	/*if( (abs(int(current_row - row)) > 1) || (abs(int(current_col - col)) > 1) )
		throw invalid_argument("you can move by only one square");

	if ((maze.valid_square(row, col)) && (!(maze.is_exit(row, col))))
	{
		current_row = row; 
		current_col = col;
		return 0; 
	}
	else if(!(maze.valid_square(row, col)))
	{
		cout << "Invalid square! [*]" << endl;
		return 1;
	}
	else
	{
		 cout << "U've reached your Exit at [" << row << ", " << col << "]. " << "Congrats bitch!" << endl;
		 return 2;	
	}*/
}

int Robot::get_current_row()
{
	return current_row;
}

int Robot::get_current_col()
{
	return current_col;
}

void Robot::set_square(unsigned int row, unsigned int col)
{
	current_row = row; 
	current_col = col;
}


