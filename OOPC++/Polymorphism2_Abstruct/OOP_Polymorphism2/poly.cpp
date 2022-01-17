#include "poly.h"


void poly::set_value(int r)
{
	radius = r;
}

int poly::area()
{
	return radius*radius*3.14;
}
