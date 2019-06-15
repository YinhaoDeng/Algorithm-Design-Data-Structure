#include "Tournament.h"

Tournament::Tournament(){

}

Computer* Tournament::startTournament(Computer* Player1,Computer* Player2,Computer* Player3,Computer* Player4,Computer* Player5,Computer* Player6,Computer* Player7,Computer* Player8){

	// first two rounds
	Computer* Candidate1 = r.playGame(r.playGame(Player1,Player2),r.playGame(Player3,Player4));
	Computer* Candidate2 = r.playGame(r.playGame(Player5,Player6),r.playGame(Player7,Player8));

	// grand final
	Computer* Winner = r.playGame(Candidate1,Candidate2);

	return Winner;

}

Tournament::~Tournament(){

}