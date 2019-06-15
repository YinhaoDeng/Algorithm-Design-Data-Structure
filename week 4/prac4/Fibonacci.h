#ifndef FIBONACCI_H
#define FIBONACCI_H

class Fibonacci
{
private:
	int* f;  //dynamic array to store numbers
public:
	Fibonacci();
	int FibonacciNumber(int n);
	bool isNumber(std::string str);
	~Fibonacci();
};
#endif