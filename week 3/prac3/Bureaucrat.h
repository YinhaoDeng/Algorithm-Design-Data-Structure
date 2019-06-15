#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Computer.h"

class Bureaucrat : public Computer{
	
public: 

	Bureaucrat();

	// return name of the class as a string
	std::string getClassName();

	~Bureaucrat();

};

#endif