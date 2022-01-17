#pragma once
#include "pers.h"
class schuler :
    public pers
{
private :
	string name;
	int ID;
	int age;
	double AGP;
public:
	// overriding: all value wrote in base class just the extra here and by  local   print() u write base class::print();
	
	//void set_name_ID_age_AGP(string, int, int, double);
	
	void setAGP(double);
	double getAGP();
	void print();
	
	
};

