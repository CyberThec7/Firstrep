#include "recta.h"


 recta::recta(int l, int w)
{
	length = l;
	width = w;
}

int recta::area()
{
	return length * width;
}
