#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include "Computer.h"

class PaperDoll : public Computer{
	
public: 

	PaperDoll();

	// return name of the class as a string
	std::string getClassName();

	~PaperDoll();

};

#endif