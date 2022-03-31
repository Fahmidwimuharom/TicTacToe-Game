#pragma once
#include"Player.h"
#include"Board[] 3x3.h"

using namespace std;

class GameManager
{
private:
	Player pemain[2];
	char symbol[2];
	Board3x3* BoardPermainan;

public :
	GameManager(Board3x3* Boardpermainan, Player plyr1, Player plyr2, char symbol1, char symbol2);

	void setPlayer(Player, char, int );
	Player getPlayer(int );
	char getSymbol(int);

	void setBoardGame(Board3x3* Boardpermainan);
	Board3x3* getboardgame();

	void display();
	void turnPlayer(char PlayerNumber);

	bool winGame(int PlayerNumber);
	char getwin();
	Player getwinner();
	void AnnouncementWin();
	void Notify();

	void start();
	void reset();
	void init();

};