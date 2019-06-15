#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

#include "Computer.h"

class RandomComputer : public Computer{
	
public: 

	RandomComputer();

	// return name of the class as a string
	std::string getClassName();

	// generate five moves randomly
	void generateMove();

	~RandomComputer();

};

#endif