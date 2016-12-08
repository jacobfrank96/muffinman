#ifndef FiveCardDraw_h
#define FiveCardDraw_h

#include "stdafx.h"
#include "functions.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
#include "game.h"
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

class FiveCardDraw : public Game {
protected:
	size_t dealer; //start at 0
	Deck discardDeck; //under the assumption that the deck constructor initializes empty deck
	int commonChipPot; //NEW: we were not specifically asked to make it protected/member variable but i think this is the best thing to do 

public:
	FiveCardDraw();
	virtual int before_turn(Player& p);
	virtual int turn(Player& p);
	virtual int after_turn(Player& p);
	virtual int before_round();
	virtual int round();
	virtual int after_round();
};

bool compareHand(std::shared_ptr<Player> p1, std::shared_ptr<Player> p2);
bool players_same_hands(shared_ptr<Player> p1, shared_ptr<Player> p2);

#endif
