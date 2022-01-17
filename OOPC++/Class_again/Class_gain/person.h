#pragma once
#include<iostream>
using namespace std;
#include "person.h"

class person
{
private:
    string name;
    int ID;
public:
    void setname(string);
    void setID(int);
    string getname();
    int getID();
/* virtual */  void print();
    person();
    ~person();
};

