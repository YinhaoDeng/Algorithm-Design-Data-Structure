#ifndef EFFICIENTFIBONACCI_H
#define EFFICIENTFIBONACCI_H

class EfficientFibonacci
{
private:
	int n;
	int f[10000];
public:
	EfficientFibonacci();
	int EfficientFibonacciNumber(int n);  
	bool isNumber(std::string str);

	~EfficientFibonacci();
};
#endif