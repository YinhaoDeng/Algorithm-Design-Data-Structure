#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int main() 
{
         int array[128];
        //Declare a testString and let user to type it as one line
        string testString;
        getline(cin, testString);
        //Declare variables to store different sections of the test string
        string function;
        int p1, p2;
        //Separate the test string into different element-parts
        stringstream ss(testString);
        ss>>array[0]>>array[1]>>array[2]>>array[3]>>function>>p1>>p2;
         LinkedList linkedList(array,4);
        //discuss the different conditions
        if(function == "AF")
        {
            linkedList.addFront(p1);
        }else if(function == "AE")
        {
            linkedList.addEnd(p1);
        }else if(function == "AP")
        {
            linkedList.addAtPosition(p1,p2);
        }else if(function == "S")
        {
            linkedList.search(p1);
        }else if(function == "DF")
        {
            linkedList.deleteFront();
        }else if(function == "DE")
        {
            linkedList.deleteEnd();
        }else if(function == "DP")
        {
            linkedList.deletePosition(p1);
        }else if(function == "GI")
        {
            linkedList.getItem(p1);
        }

        linkedList.printItems();


    return 0;
}