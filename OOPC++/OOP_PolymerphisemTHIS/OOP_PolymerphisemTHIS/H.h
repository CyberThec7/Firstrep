#pragma once
class H
{
protected:
    int length, width;
public:
    void set_value(int, int);
    int virtual area() = 0;
    void print_area();


};

