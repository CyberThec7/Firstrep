#pragma once
#include "shape.h"
class polyg :
    public shape
{
private:
    int radius;
public:
    polyg(int);
    int area();
};

