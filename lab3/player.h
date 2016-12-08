#ifndef player_h
#define player_h

#include "stdafx.h"
#include "functions.h"
#include "deck.h"
#include "hand.h"
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

struct Player {
	string name;
	Hand hand;
	unsigned int handsWon;
	unsigned int handsLost;
	unsigned int chips; //NEW

	Player(std::string n);
};

ostream& operator<< (ostream& out, const Player& p);

#endif
