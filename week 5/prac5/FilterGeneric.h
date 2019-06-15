#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric
{
private:
    virtual bool game(int) = 0;
protected:
    static int l;
public:
    FilterGeneric();
    std::vector<int> map(std::vector<int> &a); //required function
};

#endif