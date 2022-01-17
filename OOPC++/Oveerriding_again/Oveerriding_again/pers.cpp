#include "pers.h"


void pers::set_name_ID_age(string n,int i,int a)
{
	name = n;
	ID = i;
	age = a;
}
// oder : 
/* 
void pers::setname(string n)
{
	name = n;
}

void pers::setID(int i)
{
	ID = i;
}

void pers::setage(int a)
{
	age = a;
}
*/

string pers::getname()
{
	return name;
}

int pers::getID()
{
	return ID;
}

int pers::getage()
{
	return age;
}

void pers::print()
{
	cout << "NAME: " << name << " " << "ID: " << ID << " " << "AGE: " << age << endl;
}



