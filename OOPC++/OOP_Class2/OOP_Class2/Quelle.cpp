#include <iostream>
using namespace std;
#include "Car.h"
int main()
{
	Car c1;
	
	cout << "ergebnis deinen Such ist :" << c1.get_mark() << endl;
	cout << "ergebnis deinen Such ist :" << c1.get_model() << endl;
	cout << "ergebnis deinen Such ist :" << c1.read_color() << endl;
	c1.set_mark("Volvo");
	cout << c1.get_mark() << endl;
} 