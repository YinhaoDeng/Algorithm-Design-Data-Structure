#include <iostream>
#include "human.h"
#include "computer.h"
#include "referee.h"
using namespace std;



void referee::judgement(human h, computer c)
{
	int n = h.total;
	//use a for loop to define the length of the result which was defined by the player
	for(int i=0; i<n; i++)
	{
		//char a_humanchoice(a_computerChoice)which set all the humanChoice(a_computerChoice) one by one
		char a_humanChoice=h.humanChoice();
		char a_computerChoice=c.computerChoice();
			if(a_humanChoice==a_computerChoice)
			{
				cout<< 'T' <<" ";
			}
			else if(a_humanChoice=='S')
			{
				cout<< 'L' <<" ";
			}
			else if(a_humanChoice=='P')
			{
				cout<< 'W' <<" ";
			}else
				cout<< 'F'<<" ";   //fallback case     just in case it fail
	}
	cout<<endl;
}
