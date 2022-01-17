#include "polyg.h"



polyg::polyg(int r)
{
	radius = r;
}

int polyg::area()
{
	return 3.14 * radius * radius;
}
