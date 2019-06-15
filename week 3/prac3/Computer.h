#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>

class Computer{

protected:

	std::string comp_move;

public:
	
	Computer();

	// return the value of comp_move
	std::string getCompMove();

	// return name of the class as a string
	// required to be implemented in derived classes
	virtual std::string getClassName() = 0;

	~Computer();

};

#endif