#include <iostream>
#include <algorithm>
#include "Reverse.h"
#include <string>
using namespace std;

/* set a constructor to initialize the reversedNumber into 0, 
otherwise the computer may set up a random number. */
Reverse::Reverse()
{
    reversedNumber=0;
}


int Reverse::reverseDigit(int value)
{
    
    if(value>0)
        {
            remainder = value % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            return reverseDigit(value/10);
        }


    return reversedNumber;
    
}

string Reverse::reverseString(std::string letters)
{
    //char l = letters[i];
    if(letters.length()==1)
    {
    
        return letters;
    }
    else
    {
        return reverseString(letters.substr(1,letters.length()))+letters.at(0);
    }
}

bool Reverse::isNumber(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(isdigit(str[i])==false)
            return false;
        else
            return true;
    }
}

Reverse::~Reverse()
{
    
}