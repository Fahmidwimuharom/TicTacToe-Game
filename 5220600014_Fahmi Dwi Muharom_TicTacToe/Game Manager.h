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
	GameManager(Player plyr1, Player plyr2, char symbol1, char symbol2, Board3x3* Boardgame);

	void setPlayer(Player pemainA, char symbolA, int PlayerNumber);
	Player getPlayer(int PlayerNumber);
	char getSymbol(int PlayerNumber);

	void setBoardGame(Board3x3* Boardgame);
	Board3x3* getboardgame();

	void display();
	void turnPlayer(int PlayerNumber);

	bool winGame(int PlayerNumber);
	Player getwin();
	void AnnouncementWin();
	void Notify();

	void start();
	void reset();
	void init();

};