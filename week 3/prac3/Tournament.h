#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Referee.h"

class Tournament{

private:

	Referee r;

public: 

	Tournament();

	// run the tournament and return the winner
	Computer* startTournament(Computer* Player1,Computer* Player2,Computer* Player3,Computer* Player4,Computer* Player5,Computer* Player6,Computer* Player7,Computer* Player8);

	~Tournament();

};

#endif