#include "rectangle.h"
#include <iostream>
using namespace std;

void rectangle::set_length(float l)
{
	
}

void rectangle::set_width(float w)
{
}

float rectangle::get_length()
{
	return length;
}

float rectangle::get_width()
{
	return width;
}

rectangle::rectangle(float l, float w): length(l), width(w)// so ist schneller und kann das user any wert nutzen
{

}
rectangle::~rectangle()
{
	cout << "Fuck you, see you in another day ;) :) \n";// dieser Satz wird wiederholt werden,und das abhängig vo wie viel object haben wir 
}
