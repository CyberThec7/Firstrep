#pragma once
#include "student.h"
class master :
    public student
{
private:
    string research_interset;
public:

    void set_research_interset(string);

    void get_research_interset();



    master();
    master(int l, float gp, string d, string n, string g, float a, string re);
    ~master();

};

