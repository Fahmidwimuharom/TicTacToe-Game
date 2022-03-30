#pragma once
#include <string>

using namespace std;

class Player
{
private:
	string name;
	int totalkemenangan;
	int totalpertandingan;

public:
	Player(string name, int kemenangan, int pertandingan);

	void setName(string name);
	string getName();

	void setTotalKemenangan(int kemenangan);
	int getTotalKemenangan();

	void setTotalPertandingan(int pertandingan);
	int getTotalPertandingan();

};