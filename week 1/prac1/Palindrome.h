#ifndef PALINDROME
#define PALINDROME
#include <string>

class Palindrome
{
private:
	std::string phrase;

public:
	Palindrome(); //default constructor
	Palindrome(std::string sPhrase);//constructor

	//3 functions for checking the string
	void removeNonletters();
	void lowerCase();
	void isPalindrome();
};
#endif