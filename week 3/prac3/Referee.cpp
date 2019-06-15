#include "Referee.h"

using namespace std;

Referee::Referee(){

	a_move = "default";
	b_move = "default";

}

Computer* Referee::playGame(Computer* a_player,Computer* b_player){

	// set the initial score to zero
	int a_score = 0;
	int b_score = 0;

	// copy computer moves
	a_move = a_player->getCompMove();
	b_move = b_player->getCompMove();

	// compare moves
	// winner's score increment by one
	for(int i = 0; i < 5; i++){

		if(b_move.at(i) == 'R'){

			if(a_move.at(i) == 'R'){
				//do nothing
			}else if(a_move.at(i) == 'P'){

				a_score++;

			}else if(a_move.at(i) == 'S'){

				b_score++;

			}

		}else if(b_move.at(i) == 'P'){

			if(a_move.at(i) == 'R'){

				b_score++;

			}else if(a_move.at(i) == 'P'){

			}else if(a_move.at(i) == 'S'){

				a_score++;

			}

		}else if(b_move.at(i) == 'S'){

			if(a_move.at(i) == 'R'){

				a_score++;

			}else if(a_move.at(i) == 'P'){

				b_score++;

			}else if(a_move.at(i) == 'S'){

			}

		}

	}

	// compare scores
	// return player with higher score
	if(a_score > b_score){

		return a_player;

	}else if(a_score < b_score){

		return b_player;

	}else{

		return a_player;

	}

}

Referee::~Referee(){

}