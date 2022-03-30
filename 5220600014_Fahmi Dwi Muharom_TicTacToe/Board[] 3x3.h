#pragma once
#include "Board.h"
#include <iostream>

class Board3x3 : public Board
{
	char board[3][3]

public:
	Board3x3();

	void display();
	bool check_gric_valid();
	bool check_grid_full();
	void reset_game();

	void setValue( int x, int y, char value);
	char getValue( int x, int y);

	bool getHorizontal();
	bool getDiagonal();
	bool getVertical();
	char getwinMark();


};