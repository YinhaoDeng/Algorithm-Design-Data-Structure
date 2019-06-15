#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main()
{
	int data[100];
	char input[500];
	char temp[500];
	int inputArrayLength=0;
	int length;
	int elementCounter=0;
	cin.getline(input, 500);
	length = strlen(input);
	for(int i=0; i<=length; i++)
	{
		if((input[i] == ' ') || (i == length))
		{

			if(elementCounter > 0 && inputArrayLength<100)
			{
				temp[elementCounter] = 0;
				data[inputArrayLength++] = atoi(temp);
			}
			elementCounter=0;
		}else{
			if((input[i] >='0' && input[i]<='9') || (input[i] == '-'))
			{
				temp[elementCounter] = input[i];
				elementCounter++;
			}

		}
	}


	RecursiveBinarySearch* b;
	int result = b->binarySearch(data,1, inputArrayLength, 1);

	if(result>=0||data[0]==1)
	{
		cout<<"true"<<" ";
	}else
	{
		cout<<"false"<<" ";
	}
	  
	QuickSort* c;
	c->quickSort(data, 0, inputArrayLength-1);
	
	for(int i=0; i<inputArrayLength; i++) //manually print out all the element
	{
		cout<<data[i]<< " ";
	}
	cout<<endl;
	 
	return 0;
}

