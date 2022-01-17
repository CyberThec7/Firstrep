#include <string>
#include "studsent.h"

void studsent::setname(string n)
{
	name = n;
}

void studsent::setID(int i)
{
	ID = i;
}

string studsent::getname()
{
	return name;
}


int studsent::getID()
{
	return ID;
}
//
//void studsent::setname_ID(string n, double i)
//{
//	name = n;
//	ID = i;
//}

void studsent::print()
{
	
	cout << "name : " << name << " " << "ID : " << ID << endl;
}

studsent::studsent():name("not defined"),ID(0)
{
}
studsent::~studsent()
{
}
