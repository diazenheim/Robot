#include "randomRobot.h"
#include "maze.h"
#include <iostream>

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

RandomRobot::RandomRobot(Maze& maze)
: Robot(maze)
{

}

void RandomRobot::gen_move(int& dr, int& dc)
{
	srand (time(NULL));
	unsigned int r;
	r = rand() % 8 + 0; 

	if (r == 0)
	{
		dr = -1;
		dc = -1;
	} else if (r == 1)
	{
		dr = -1;
		dc = 0;
	} else if (r == 2)
	{
		dr = -1;
		dc = 1;
	} else if (r == 3)
	{
		dr = 0; 
		dc = -1;
	} else if (r == 4)
	{
		dr = 0;
		dc = 1;
	} else if (r == 5)
	{
		dr = 1;
		dc = -1;
	} else if (r == 6)
	{
		dr = 1;
		dc = 0;
	} else if (r == 7)
	{
		dr = 1; 
		dc = 1;
	}

}

void RandomRobot::move(Maze& maze)
{
	int curr_row = get_current_row();
	int curr_col = get_current_col();

	int next_row, next_col; 
	int dr, dc;

	this->gen_move(dr, dc);
	next_row = curr_row + dr; 
	next_col = curr_col + dc; 

	while (maze.valid_square(next_row, next_col) == false)
	{
		gen_move(dr, dc);
		next_row = curr_row + dr; 
		next_col = curr_col + dc; 		
	}
	
	set_square(next_row, next_col);

	cout << "Current position: [ " << curr_row << ", " << curr_col << "]" << endl; 
}
