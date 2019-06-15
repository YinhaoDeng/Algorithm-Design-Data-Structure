#include <iostream>
#include "Palindrome.h"
#include <string>

using namespace std;

Palindrome::Palindrome()
{
	phrase = "Hello";
}

Palindrome::Palindrome(string sPhrase)
{
	phrase = sPhrase;
}

//Do this first, before you convert upper letter to lower letter
void Palindrome::removeNonletters() 
{
	int index=0;
	while(index<phrase.length())
	{
		if(isalpha(phrase[index]))
		{
			index++;
			
		}else
			phrase.erase(index,1);//erase the phrase[i] letter
	}
}

void Palindrome::lowerCase()
{
	for(int i=0; i<phrase.length(); i++)
	{   //Check if phrase[i] is the characters in Upper case
		if (phrase[i]>=65&&phrase[i]<=90)
		/*
		To change uppercase character into lowercase character,
		 just add 32 in character 
		 in uppercase to convert it into lowercase. 
		 Since ASCII value of A is 65 and ASCII value of a is 97.
		*/
		phrase[i]+=32;
	}
}

void Palindrome::isPalindrome()
{
		int a=1;
	for(int i=0;i<phrase.length(); i++)
	{
		if(phrase[i]!=phrase[phrase.length()-i-1])
		{
			a=0;
			break;
		}
	}

	if (a==1)
		cout<<"Yes"<<endl;
	else if (a==0)
		cout<<"No"<<endl;
}