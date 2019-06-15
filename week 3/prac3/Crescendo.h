#ifndef CRESCENDO_H
#define CRESCENDO_H

#include "Computer.h"

class Crescendo : public Computer{
	
public: 

	Crescendo();

	// return name of the class as a string
	std::string getClassName();

	~Crescendo();

};

#endif