#include "DoubleEndStack.h"
using namespace std;

DoubleEndStack::DoubleEndStack()
{
	left = CAP-1;
	right = 0;
	count = 0;
}

void DoubleEndStack::pushLeft(int val)
{
	if(count<CAP)
	{


		content[left]=val;
		left--;
		count++;
	}
}

void DoubleEndStack::pushRight(int val)
{
	if(count<CAP)
	{

		content[right]=val;
		right++;
		count++;
	}
}

int DoubleEndStack::popLeft()
{
	if(count<=0)
	{
		return -1;
	}else
	{
		

		left++;
		count--;
		if(left>CAP)
		{
			left-=CAP;
		}
		return content[left];
	}
}

int DoubleEndStack::popRight()
{
	if(count<=0)
	{
		return -1;
	}else if(count>0)
	{
		
		

			right--;
			count--;
		if(right<0)
		{
			right+=CAP;  //go  circle
		}
			return content[right];
	}
}