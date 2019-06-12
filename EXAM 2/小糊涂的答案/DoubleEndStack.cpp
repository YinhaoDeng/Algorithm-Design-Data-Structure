#include "DoubleEndStack.h"
#include <iostream>

using namespace std;

DoubleEndStack::DoubleEndStack()
{
	left = CAP-1;  //initialize
	right = 0;
	count = 0;
}

void DoubleEndStack::pushLeft(int val)
{
	if (count < CAP) //still have space
	{
		content[left] = val;
		left--;
		count++;
	}
}

void DoubleEndStack::pushRight(int val)
{
	if (count < CAP)
	{	
		
		content[right] = val;
		right++;
		count++;
	}
}

int DoubleEndStack::popLeft()
{
	if (count <= 0)
		return -1;
	else
	{	
		left++;
		count--;
		return content[left];
	}
}

int DoubleEndStack::popRight()
{
	if (count <= 0)
		return -1;
	else
	{		
		right--;
		count--;
		return content[right];
	}
}


