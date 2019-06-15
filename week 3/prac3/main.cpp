#include "Tournament.h"
#include <iostream>

using namespace std;

// g++ -std=c++11 -o test Computer.cpp Human.cpp Referee.cpp RandomComputer.cpp Avalanche.cpp Bureaucrat.cpp Toolbox.cpp Crescendo.cpp PaperDoll.cpp FistfullODollars.cpp Tournament.cpp main.cpp

int main(){

	// define objects
	Avalanche a;
	Bureaucrat b;
	Toolbox c;
	Crescendo d;
	PaperDoll e;
	FistfullODollars f;

	Tournament t;

	// define an array of Computer pointers
	// store eight derived class objects
	Computer **players;
	players = new Computer*[8];

	// define a test string and ask user for input
	string testString;
	getline(cin,testString);

	// temporary string and counters
	string tempString;
	int stringCounter = 0;
	int playerCounter = 0;

	for(int i=0; i<testString.length(); i++){

		// using the spaces between to determine sections of input
		if(testString.at(i) == ' '){

			// clear tempString and assign the corresponding segment of testString
			tempString.empty();
			tempString.assign(testString.begin() + stringCounter, testString.begin() + i);

			// fit player according to string
			if(tempString == "Avalanche"){

				players[playerCounter] = &a;

			}else if(tempString == "Bureaucrat"){

				players[playerCounter] = &b;

			}else if(tempString == "Toolbox"){

				players[playerCounter] = &c;

			}else if(tempString == "Crescendo"){

				players[playerCounter] = &d;

			}else if(tempString == "PaperDoll"){

				players[playerCounter] = &e;

			}else if(tempString == "FistfullODollars"){

				players[playerCounter] = &f;

			}

			// relocate stringCounter to the next section
			playerCounter++;
			stringCounter = i+1;

		}else if(playerCounter == 7){

			// special case for the last input
			// clear tempString and assign the corresponding segment of testString
			tempString.empty();
			tempString.assign(testString.begin()+stringCounter,testString.end());

			if(tempString == "Avalanche"){

				players[playerCounter] = &a;

			}else if(tempString == "Bureaucrat"){

				players[playerCounter] = &b;

			}else if(tempString == "Toolbox"){

				players[playerCounter] = &c;

			}else if(tempString == "Crescendo"){

				players[playerCounter] = &d;

			}else if(tempString == "PaperDoll"){

				players[playerCounter] = &e;

			}else if(tempString == "FistfullODollars"){

				players[playerCounter] = &f;

			}

			playerCounter++;

		}

	}

	// print the result of tournament
	cout<<(t.startTournament(players[0],players[1],players[2],players[3],players[4],players[5],players[6],players[7]))->getClassName()<<endl;

	delete[] players;

	return 0;
}