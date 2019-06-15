#include <iostream>
#include "human.h"
using namespace std;

human::human()
{
	num=0;
	//ask the player to decide the number of choice
	cin>>total;
	//set the value of atotal which is the same of total and can get number from total
	atotal = new char [total];
	//tell the computer to reconstruct the length of the array
	for(int i=0; i<total; i++)
	{
		cin >> atotal[i];
	}

}

char human::humanChoice()
{
	char final = atotal[num];
	num++;
	return final;
}