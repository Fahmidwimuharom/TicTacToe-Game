#include<iostream>
#include "Board.h"
#include "Board[] 3x3.h"
#include "Player.h"
#include "Game Manager.h"

using namespace std;

int main()
{
	Board* Boardpermainan = new Board;

	Player pemain1("Pemain 1", 0, 0);
	Player pemain2("Pemain 2", 0, 0);

	GameManager game(pemain1, pemain2, "X", "O", Boardpermainan);
	game.start();
}