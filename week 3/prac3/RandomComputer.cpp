#include <cstdlib>
#include "RandomComputer.h"

using namespace std;

RandomComputer::RandomComputer(){

	comp_move = "RRRRR";

}

string RandomComputer::getClassName(){

	return "RandomComputer";

}

void RandomComputer::generateMove(){

	int move;

	for (int i = 0; i < 5; i++){
		
		// generate random number between 1 and 3
		move = rand() % 3 + 1;

		// set move according to number
		if(move == 1){

			comp_move.replace(i,i,"R");

		}else if(move == 2){

			comp_move.replace(i,i,"P");

		}else if(move == 3){

			comp_move.replace(i,i,"S");

		}

	}

}

RandomComputer::~RandomComputer(){

}