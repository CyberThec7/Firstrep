#include "schuler.h"


void schuler::setAGP(double g)
{
	AGP = g;
}

double schuler::getAGP()
{
	return AGP;
}


void schuler::print()
{
	pers::print();// overriding
	cout << "AGP: "<<AGP << endl;
	
}


