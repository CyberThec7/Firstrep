#include <iostream>
using namespace std;
#include "Haus.h"
int main()
{
	Haus H1;
	H1.set_geschoss(11);
	H1.set_miete(-5);
	H1.set_anzahl_garage(3);
	H1.set_area(210);
	H1.set_heizung("gas");
	cout << H1.get_anzahl_garage() << endl;
	cout << H1.get_area() << endl;
	cout << H1.get_geschoss() << endl;
	cout << H1.get_miete() << endl;
	cout << H1.read_küche() << endl; 
	cout << H1.read_heizung() << endl;
}
