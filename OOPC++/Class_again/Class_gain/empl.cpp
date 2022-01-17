#include "empl.h"

void empl::setname()
{
}
void empl::setID()
{
}
string empl::getname()
{
	return name;
}

int empl::getID()
{
	return ID;
}

void empl::print(string, int )
{
	cout << "name : " << name << " " << "ID : " << ID << endl;
}

empl::empl() :name("not defined"), ID(0)
{
}

empl::~empl()
{
}
