#include<iostream>
#include "Board.h"
#include "Board[] 3x3.h"
#include "Player.h"
#include "Game Manager.h"

using namespace std;

int main()
{
	GameManager gameTictactoe;
	char ulang;
	bool gameState = true;
	while (gameState)
	{
		gameTictactoe.makeMove();
		if (gameTictactoe.checkWinCondition())
		{
			gameTictactoe.announcment();
			cout << endl << "  ====================\n  Apakah anda ingin bermain lagi? (Y/N)";
			cin >> ulang;
			if (ulang == 'Y')
			{
				gameTictactoe.newgame();
			}
			else
			{
				cout << endl << "  Terima kasih sudah bermain ";
				break;
			}
		}
	}

	return 0;
}