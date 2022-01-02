#include <iostream>
#include <fstream>
#include <vector>
#include "maze.h"

using namespace std;

/*private: 
	vector<string> v;*/

void Maze::read()
{
	string text;
	ifstream input("robo.txt");
	while (getline (input, text)) 	
	{
		v.push_back(text);
	}
		//cout << v[0][1] << endl;
} 

void Maze::find_start(unsigned int& r, unsigned int& c)
{
	for(int i=0; i<v.size(); i++)
	{
		for(int j=0; j<(v[i].size()); j++)
		{	
			if(v[i][j] == 'S')
			{
				r = i;
				c = j;
				break;
			}
		}
	}
}

bool Maze::valid_square(unsigned int row, unsigned int col)
{
	if(v[row][col] == '*')
		return false;
	else
		return true;
}

bool Maze::is_exit(unsigned int row, unsigned int col)
{
	if (v[row][col] == 'E') 
		return true;
	return false;
}

