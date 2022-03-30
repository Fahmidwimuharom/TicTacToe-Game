#pragma once

class Board
{
	virtual void display();
	virtual bool check_grid_valid();
	virtual bool check_grid_full();
	virtual void reset_game();

	virtual bool getHorizontal();
	virtual bool getDiagonal();
	virtual bool getVertical();
};
