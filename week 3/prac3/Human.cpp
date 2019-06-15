#include "Human.h"
#include <cctype>
#include <cstdlib>

using namespace std;

Human::Human(string hmove){

	human_move = hmove;

}


string Human::getHumanMove(){

	return human_move;

}

Human::~Human(){
	
}