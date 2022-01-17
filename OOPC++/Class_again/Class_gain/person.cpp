#include "person.h"

void person::setname(string n)
{
	name = n;
}
void person::setID(int i)
{
	ID = i;
}

string person::getname()
{
	return name;
}

int person::getID()
{
	return ID;
}


void person::print()
{
	cout << "name : " << name << " " << "ID : " << ID << endl;
}

person::person():name("not defined"), ID(0)
{
}

person::~person()
{
}
