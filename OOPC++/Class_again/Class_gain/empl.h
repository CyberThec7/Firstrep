#pragma once
#include<iostream>
using namespace std;
#include "person.h"

class empl :
    public person
{
private:
    string name;
    int ID;
public:
    void setname();
    void setID();
    string getname();
    int getID();
    void print(string,int);
    empl();
    ~empl();
};

