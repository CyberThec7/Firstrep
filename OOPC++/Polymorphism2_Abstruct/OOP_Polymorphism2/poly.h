#pragma once
#include "bClass.h"
class poly :
    public bClass
{
private:
    int radius;

public:
    void set_value(int);
    int area();
};

