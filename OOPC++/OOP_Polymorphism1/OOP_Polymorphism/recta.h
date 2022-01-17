#pragma once
#include "shape.h"
class recta :
    public shape
{

private:
    int length;
    int width;
public:
  recta (int l, int w);

    int area();
};

