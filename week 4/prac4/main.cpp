#include <iostream>
#include "Reverse.h"
#include "Fibonacci.h"
#include "EfficientFibonacci.h"
using namespace std;
#include <string>

int main()
{
   //define objects
    Reverse myint; 
    Reverse mystr;
    Fibonacci myfibo;
    EfficientFibonacci myEffifibo;

    //define 4 input variables
    string i, s, n1, n2;
    
    cin>>i>>s>>n1>>n2;

    if(myint.isNumber(i)==true)
    {
    	int i_ = stoi(i);
    	cout<<myint.reverseDigit(i_)<<" ";
    }
    else
    	cout<<"ERROR ";


    cout<<mystr.reverseString(s)<<" ";


    if(myfibo.isNumber(n1)==true)
    {
    	int n1_ = stoi(n1);
    	cout<<myfibo.FibonacciNumber(n1_)<<" ";
    }
    else
    	cout<<"ERROR ";

    if(myEffifibo.isNumber(n2)==true)
    {
    	int n2_ = stoi(n2);
    	cout<<myEffifibo.EfficientFibonacciNumber(n2_)<<" ";
    }
    else
    	cout<<"ERROR "<<endl;
  

    return 0;
}