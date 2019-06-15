#ifndef REVERSE_H
#define REVERSE_H

#include <string>

class Reverse
{
	private:

		int remainder;
		int reversedNumber;

	public:
		Reverse();
		//The function takes in an non-negative int value and reverse the digits using recursion. The “reversed” int is then re- turned. For example, reverseDigit(12345) returns 54321.
		int reverseDigit(int value);

		//The function takes in a std::string and returns the reversed string.
		std::string reverseString(std::string letters);
		bool isNumber(std::string str);

~Reverse();

};
#endif