#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>

class ReduceGeneric
{
private:
    virtual int op(int,int) = 0;
protected:
    static int l;
public:
    ReduceGeneric();
    int map(std::vector<int> &a);
};

#endif