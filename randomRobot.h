#include "maze.h"
#include "robot.h"

#ifndef RANDOMROBOT_H
#define RANDOMROBOT_H

class RandomRobot : public Robot
{
public:
	RandomRobot(Maze& maze);

	void move(Maze& maze); 

private:
	void gen_move(int& dr, int& dc);
};

#endif