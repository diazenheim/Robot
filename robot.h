#ifndef ROBOT_H
#define ROBOT_H

class Robot
{
private:
	unsigned int current_row;
	unsigned int current_col;

public:
	Robot(Maze& maze);

	virtual void move(Maze& maze); //virtual ??

	int get_current_row();

	int get_current_col();

	void set_square(unsigned int row, unsigned int col);


};

#endif