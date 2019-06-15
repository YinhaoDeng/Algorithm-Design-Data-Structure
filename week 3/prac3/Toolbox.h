#ifndef TOOLBOX_H
#define TOOLBOX_H

#include "Computer.h"

class Toolbox : public Computer{
	
public: 

	Toolbox();

	// return name of the class as a string
	std::string getClassName();

	~Toolbox();

};

#endif