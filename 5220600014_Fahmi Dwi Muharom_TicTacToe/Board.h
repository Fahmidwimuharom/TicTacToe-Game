#pragma once

class Board3x3
{
public :
	virtual void display();
	virtual bool check_grid_valid();
	virtual bool check_grid_full();
	virtual void reset_game();

	virtual void setValue();
	virtual char getValue();


	virtual char getHorizontal();
	virtual char getDiagonal();
	virtual char getVertical();
};
