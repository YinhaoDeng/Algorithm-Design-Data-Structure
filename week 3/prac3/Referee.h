#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"

class Referee{

	std::string a_move;
	std::string b_move;

public:
	
	Referee();

	// compare moves of two computers and return the winner
	Computer* playGame(Computer* a_player,Computer* b_player);

	~Referee();

};

#endif