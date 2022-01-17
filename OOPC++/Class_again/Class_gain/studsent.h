#pragma once
#include<iostream>
using namespace std;
#include "person.h"


class studsent :
    public person
{
private:
     string name;
     int ID;
public:
    /*void setname_ID(string, double);*/

    void setname(string n);
    void setID(int i);
    string getname();
    int getID();

    void print();
     studsent();
   ~studsent();
};

