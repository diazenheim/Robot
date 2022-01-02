#include <vector>
#include <string>
using namespace std;

#ifndef MAZE_H
#define MAZE_H

class Maze
{
private:
	vector<string> v;

public:
	void read();

	void find_start(unsigned int& r, unsigned int& c);

	bool valid_square(unsigned int row, unsigned int col);

	bool is_exit(unsigned int row, unsigned int col);

};

#endif