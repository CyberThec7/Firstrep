#pragma once
#include <iostream>
using namespace std;
#include "person.h"
class student :
    public person   
{
private:
    int level;
    float gpa;
    string depart;
public:
    void setlevel(int);
    void setgpa(float);
    void setdepart(string);

   
    int getlevel();
    float getgpa();
    string getdepart();



  student();
   student(int l, float gp, string d, string n, string g, float a);
   void get_student(); 
    ~student();
};

