#pragma once
#include "pers.h"
class emp :
    public pers
{
private:
	string name;
	int ID;
	int age;
	double salary;
public:
	void set_salary(double);
	void print();

};

