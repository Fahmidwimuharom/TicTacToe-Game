#include "Board[] 3x3.h"

using namespace std;

Board3x3::Board3x3()
{
	this->reset_game();
}

void Board3x3::reset_game()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
}