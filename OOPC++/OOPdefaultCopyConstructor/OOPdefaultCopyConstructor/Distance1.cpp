#include "Distance1.h"
#include <iostream>
using namespace std;
 
void Distance1::set_feet(int)
{

}

void Distance1::set_inches(float)
{
}

int Distance1::get_feet()
{
	return feet;
}

float Distance1::get_inches()
{
	return inches;
}

Distance1::Distance1() :feet(90), inches(34.2)
{

}
Distance1::Distance1(int f, float i) : feet(f), inches(i)
{

}

void Distance1::set_Distance1(int f, float i)
{
	feet = f;
	inches = i;
}

void Distance1::get_Distance1()
{
	cout << " feet " << feet << " inches " << inches << endl;
}

Distance1::~Distance1()
{
	cout << " Have a nice day nigga ;) " << endl;
}