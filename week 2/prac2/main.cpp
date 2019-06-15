#include <iostream>
//don't forget to include all these files
#include "human.h"
#include "computer.h"
#include "referee.h"
using namespace std;

int main()
{
	computer c;  
	human h;   //input human choices
	referee r;

	r.judgement(h,c);

	return 0;
}