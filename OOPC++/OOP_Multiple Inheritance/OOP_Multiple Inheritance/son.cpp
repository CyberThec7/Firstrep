#include "son.h"


son::son(string nc, string n, int a, string f, string g,string ch, string j):father(nc,n,a), mother(f,g), nachname(ch),job(j)
{
}


void son::set_nachname(string n)
{
	nachname = n;
}

void son::print()
{
	father::print();
	mother::print();
	cout << "nachname " << nachname <<"   " << " job" << job << endl;
}

son::son():nachname("unknown"), job("Arbeitslosigkeit")
{
}

son::~son()
{
}
