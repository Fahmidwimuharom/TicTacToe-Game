#include <iostream>
#include "Game Manager.h"
#include "Board[] 3x3.h"
#include "Player.h"

using namespace std;

GameManager::GameManager(Board* Boardpermainan, Player plyr1, Player plyr2, char symbol1, char symbol2)
{
	this->BoardPermainan = BoardPermainan;
	pemain[0] = plyr1;
	pemain[1] = plyr2;
	symbol[0] = symbol1;
	symbol[1] = symbol2;
}

void GameManager::setPlayer(Player x, char y, int num)
{
	pemain[num] = x;
	symbol[num] = y;

}

Player GameManager::getPlayer(int PNum) {
	return pemain[PNum];
}

char GameManager::getSymbol(int PNum) {
	return symbol[PNum];
}

void GameManager::setBoardGame(Board3x3* brd) {
	this->BoardPermainan = brd;
}

Board* GameManager::getboardgame() 
{
	return BoardPermainan;
}


void GameManager::display()
 {
	BoardPermainan->display();
}


void GameManager::reset() {
	BoardPermainan->reset_game();
}




char GameManager::getwin() {
	if (BoardPermainan->getHorizontal() != '0')
		return BoardPermainan->getHorizontal();

	else if (BoardPermainan->getVertical() != '0')
		return BoardPermainan->getVertical();

	else if (BoardPermainan->getDiagonal() != '0')
		return BoardPermainan->getDiagonal();

	else
		return 'f';
}

/*
Player GameManager::getWinner() {
	for (int i = 0; i < 2; i++) {
		if (isWin(i) == true)
			return getPlayer(i);
	}
}

void GameManager::AnnounceWinner() {
	cout << "Selamat " << getWinner().getnama() << "Kamu Menang!" << endl;
}
*/

void GameManager::turnPlayer(char PlayerNumber)
{
	int x, y;
	cout << pemain[PlayerNumber].getName() << "Input Koordinat (x y): " << endl;
	cin >> x >> y;

	if (x > 2 || y > 2) {
		cout << "Invalid square Index, Try Again";
		turnPlayer(1);
	}

	if (BoardPermainan->getValue(x, y) == '0')
	{
		board->setvalueAtIndex(x, y, symbol);
	}

	else {
		cout << "Squere is filled. Please insert another position." << endl;
		turnPlayer(symbol);
	}
}


void GameManager::Play() {
	int step = 0;
	while (!board->isFull()) {
		step++;
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++)
			{
				if (board->getvalueAtIndex(x, y) != '0')
					cout << board->getvalueAtIndex(x, y) << "\t";
				else
					cout << "-\t";
			}
		}
	}
}
*/