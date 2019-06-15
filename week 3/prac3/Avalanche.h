#ifndef AVALANCHE_H
#define AVALANCHE_H

#include "Computer.h"

class Avalanche : public Computer{
	
public: 

	Avalanche();

	// return name of the class as a string
	std::string getClassName();

	~Avalanche();

};

#endif