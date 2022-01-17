#include <iostream>
using namespace std;
#include "Distance1.h"
int main()
{
	Distance1 d1(50, 22.3);
	cout << d1.get_feet() << endl;
	Distance1 d2;
	Distance1 d3(d1);
	Distance1 d4 = d1;
	cout << d2.get_feet()<< " " << d3.get_feet() << " " << d4.get_feet()<< " " << endl;
	cout << d2.get_inches() << " " << d3.get_inches() << " " << d4.get_inches() << " " << endl;
	d4.set_Distance1(49,13.3);
	d4.get_Distance1();
}
