#include <iostream>
using namespace std;
#include "Cars.h"

int main()
{
	Cars c;
	c.get_z�hler();
	cout << c.get_z�hler() << endl;
	Cars c1;
	c1.get_z�hler();
	cout << c1.get_z�hler() << endl;

	Cars c2;
	c2.get_z�hler();
	cout << c2.get_z�hler() << endl;
	Cars c3;
	c3.get_z�hler();
	cout << c3.get_z�hler() << endl;
	Cars c4;
	c4.get_z�hler();
	cout << c4.get_z�hler() << endl;

	Cars c5;
	c5.get_z�hler();
	cout << c5.get_z�hler() << endl;
	// lektion (2) static methoden :
	Cars::add(23, 54);
	Cars::multi(23, 54.5);
	Cars::substruct(59.4, 54.5);
	cout << Cars::add(23, 54)<< endl;
	cout << Cars::multi(23, 54.5) << endl;
	cout << Cars::substruct(59.4, 54.5) << endl;
	Cars::dissplay("Audi", 2022, "weinrot");// loock here we didn't use cout coz its void :)
	Cars::dissplay("VW", 2021, "gelb");
	Cars::dissplay("mercedes", 2020, "lila");
	
}