#include <iostream>
using namespace std;
#include "hemd.h"
int main()
{
	hemd h1("red", "coton", 30.2);
	cout << h1.getcolor() << endl;
	hemd h2;
	cout << h2.getcolor() << endl;
}