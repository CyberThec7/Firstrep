#include "H.h"
#include <iostream>
using namespace std;

void H::set_value(int l, int w)
{
	length = l;
	width = w;
}

void H::print_area()
{
	cout << this->area() << endl;
	// oder 
	cout << "look at this :  " << this->area() << endl;
}