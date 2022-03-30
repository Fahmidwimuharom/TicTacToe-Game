#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

Player::Player()
{
	name = ' ';
	totalkemenangan = 0;
	totalpertandingan = 0;
}

Player::Player(string name, int kemenangan, int pertandingan)
{
	name = name;
	totalkemenangan = kemenangan;
	totalpertandingan =pertandingan;
}

void Player::setName(string name)
{
	this->name = name;
}

string Player::getName()
{
	return name;
}

void Player::setTotalKemenangan(int kemenangan)
{
	this->totalkemenangan = kemenangan;
}

int Player::getTotalKemenangan() 
{
	return totalkemenangan;
}

void Player::setTotalPertandingan(int pertandingan) 
{
	this->totalpertandingan = pertandingan;
}

int Player::getTotalPertandingan() {
	return totalpertandingan;
}
