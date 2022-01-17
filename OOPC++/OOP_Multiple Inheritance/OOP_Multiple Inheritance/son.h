#pragma once
#include "father.h"
#include "mother.h"
class son :
    public father,public mother
{
private:
    string nachname;
    string job;
public:

     void set_nachname(string);
 
    void print();


    son();
    son(string nc, string n, int a, string f, string g ,string ch, string j);
    ~son();
};

