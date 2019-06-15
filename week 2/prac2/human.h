#ifndef HUMAN_H
#define HUMAN_H

class human
{
public:
	//use a "num" to count the total number that the player choose
	//use a pointer "p" to reach every position
	//use a "total" to allow the player cin the total number of the play times
	int num;
	char * atotal;
	int total;

	human();
	char humanChoice();

};
#endif
