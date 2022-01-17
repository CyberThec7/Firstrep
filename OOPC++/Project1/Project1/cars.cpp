#include "cars.h"


using namespace std;

void cars::setname(string n)
{
	 name = n;
}

void cars::setcolor(string c)
{
	 color= c ;
}

void cars::setmaxspeed(int x)
{
	x = maxspeed;
}

void cars::setmodel(int m)
{
	model = m;
}

string cars::getname()
{
	 return name;
}

string cars::getcolor()
{
	return color;
}

int cars::getmaxspeed()
{
	return maxspeed;
}

int cars::getmodel()
{
	return model;
}

void cars::print()
{
	cout << "name of car is : " << name << " color of car : " << color << "maxspeed of car is : " << "model : " << model << endl;
}


