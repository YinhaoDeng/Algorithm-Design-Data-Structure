#include <iostream>
#include <string>
#include "Palindrome.h"

using namespace std;

int main()
{
	string userInput;  //create a string to store user input

	getline(cin,userInput);

	Palindrome string(userInput);

	//string checked by 3 functions
	string.removeNonletters();
	string.lowerCase();
	string.isPalindrome();

	return 0;
}