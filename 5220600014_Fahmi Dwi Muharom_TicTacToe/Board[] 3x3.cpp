#include "Board[] 3x3.h"
#include <iostream>

using namespace std;

Board3x3::Board3x3()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = '0';
		}
	}
}


void Board3x3::display()
{
	cout << "||" << board[0][0] << "||" << board[0][1] << "||" << board[0][2] << endl;
	cout << "||" << board[1][0] << "||" << board[1][1] << "||" << board[1][2] << endl;
	cout << "||" << board[2][0] << "||" << board[2][1] << "||" << board[2][2] << endl;
	cout << endl;
}


bool Board3x3::check_grid_valid()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] != '0')
				return false;
		}
	}
	return true;
}

bool Board3x3::check_grid_full()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == '0')
				return false;
		}
	}
	return true;
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

void Board3x3::setValue(int x, int y, char value)
{
	board[x][y] = value;
}

char Board3x3::getValue(int x, int y)
{
	return board[x][y];
}


char Board3x3::getHorizontal()
{
	for (int i = 0; i < 3; i++) {
		if (board[i][0] != '0' && board[i][0] == board[i][1] && board[i][0] == board[i][2])
			return board[i][0];
	}

	return '0';
}

char Board3x3::getDiagonal()
{
	if (board[0][0] != '0' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
	{
		return board[0][0];
	}

	else if (board[0][2] != '0' && board[0][2] == board[1][1] && board[2][0] == board[0][2])
	{
		return board[0][2];
	}
	
	else
	{
		return 0;
	}
}

char Board3x3::getVertical()
{
	for (int i = 0; i < 3; i++) {
		if (board[0][i] != '0' && board[0][i] == board[1][i] && board[0][i] == board[2][i])
			return board[0][i];
	}

	return '0';
}
