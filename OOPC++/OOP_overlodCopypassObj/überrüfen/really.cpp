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

void really::set_gr�sse(float g)
{
	if (g > 0)
		gr�sse = g;
	else
		
	cout << "Error" <<  endl;
	gr�sse = 200.4;
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
	reall.gr�sse = t1.gr�sse + gr�sse;
	return reall;
}

int really::get_miete()
{
	return miete;
}

float really::get_gr�sse()
{
	return gr�sse;
}
// nun Constructor Overloading :
really::really():miete (0), gr�sse(0)
{

}
 really::really(int q, float p):miete(q), gr�sse(p)// das f�r nuter damit er seine werte schreiben 
{
	/*if (p < gr�sse)
		gr�sse = p;
	else

		cout << "Error" << endl; warum schreibt noch 21.3 ???
	
*/

}
// nun(3) The default Copy Constructor
void really::set_really(int u, float b)
{
	miete = u;
	gr�sse = b;
}
void really::get_really()// das kann nicht n�tig da ich get miete und gr�sse habe aber soll nicht geschrieben werden bei really.h
{
	cout << " miete  " << miete << "  groesse  " << gr�sse << endl;
}
really::~really()
{

}
