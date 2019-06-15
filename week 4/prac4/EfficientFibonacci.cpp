#include <iostream>
#include "EfficientFibonacci.h"
using namespace std;

EfficientFibonacci::EfficientFibonacci()
{
	for(int i=0; i<10000; i++)
	{
		f[i]=-1;
	} //initialization
}

int EfficientFibonacci::EfficientFibonacciNumber(int n)
{
	if(n==0)
	{
		return 0;
	}else if(f[n]!=-1)
	{
		return f[n];
	}else if(n==1 || n==2)
	{
		return 1;
	}
	return f[n]=EfficientFibonacciNumber(n-1)+EfficientFibonacciNumber(n-2);
} 

bool EfficientFibonacci::isNumber(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(isdigit(str[i])==false)
            return false;
        else
            return true;
    }
}
	
EfficientFibonacci::~EfficientFibonacci()
{

}