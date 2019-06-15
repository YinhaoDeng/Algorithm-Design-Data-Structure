#include <iostream>
#include "Fibonacci.h"
using namespace std;

Fibonacci::Fibonacci()
{

}

int Fibonacci::FibonacciNumber(int n)
{
	if(n<=1)
		return n;
	return FibonacciNumber(n-1)+FibonacciNumber(n-2);
}

bool Fibonacci::isNumber(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(isdigit(str[i])==false)
            return false;
        else
            return true;
    }
}

Fibonacci::~Fibonacci()
{

}