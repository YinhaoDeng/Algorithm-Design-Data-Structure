#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human{

	std::string human_move;

public:
	
	Human(std::string hmove);

	std::string getHumanMove();  // return the value of human_move

	~Human();

};

#endif