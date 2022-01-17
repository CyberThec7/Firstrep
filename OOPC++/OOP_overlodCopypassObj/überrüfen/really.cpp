#include "really.h"
#include <iostream>
using namespace std;

void really::set_miete(int m)
{
	if (m > 0)
		miete = m;
	else
	
	cout << "Error" << endl;
	miete = 60;
}

void really::set_grösse(float g)
{
	if (g > 0)
		grösse = g;
	else
		
	cout << "Error" <<  endl;
	grösse = 200.4;
}

float really::miet(float i, int o)
{
	return i* o;
}

/*float really::miet(int i, float o)
{
	return i - o;           warum falsch???????
}*/

double really::miet(float i, double o)
{
	return i* o;
}

float really::miet(float i, float o)
{
	return i + o;
}

really really::add(really t1)
{
	really reall;
	reall.miete = miete + t1.miete;
	reall.grösse = t1.grösse + grösse;
	return reall;
}

int really::get_miete()
{
	return miete;
}

float really::get_grösse()
{
	return grösse;
}
// nun Constructor Overloading :
really::really():miete (0), grösse(0)
{

}
 really::really(int q, float p):miete(q), grösse(p)// das für nuter damit er seine werte schreiben 
{
	/*if (p < grösse)
		grösse = p;
	else

		cout << "Error" << endl; warum schreibt noch 21.3 ???
	
*/

}
// nun(3) The default Copy Constructor
void really::set_really(int u, float b)
{
	miete = u;
	grösse = b;
}
void really::get_really()// das kann nicht nötig da ich get miete und grösse habe aber soll nicht geschrieben werden bei really.h
{
	cout << " miete  " << miete << "  groesse  " << grösse << endl;
}
really::~really()
{

}
