#include "unnary.h"
#include <iostream>

using namespace std;


int unnary::get_count()
{
	return count;
}


unnary unnary::operator++()
{
	++count;
	return unnary(count);
}

unnary unnary::operator--()
{
	--count;
	return unnary(count);
}

unnary unnary::operator++(int)// WICHTIG
{
	count++;
	return unnary(count);
}

unnary unnary::operator--(int)// WICHTIG
{
	count--;
	return unnary(count);
}
unnary unnary::operator+(unnary t)
{
	int u = usd + t.usd;
	double s = syp + t.syp;
	return unnary (u, s);
}
unnary unnary::operator-(unnary t2) 
{
	int u = usd - t2.usd;
	double s = syp - t2.syp;
	return unnary (u, s);
}
unnary unnary::operator*(unnary t)
{
	int u = usd * t.usd;
	double s = syp * t.syp;
	return unnary(u, s);
}
unnary unnary::operator/(unnary t)
{
	int u = usd / t.usd;
	double s = syp / t.syp;
	return unnary(u, s);
}
unnary unnary::operator%(unnary t)
{
	int u = usd % t.usd;
	
	return unnary(u); // Modolo funktioniert nur mit int *******
}
unnary::unnary(): count(0)
{
}

unnary::unnary(int c) : count(c) 
{

}

unnary::unnary(int u, double s) : usd(u), syp(s)
{
	usd = u;
	syp = s;

}

void unnary::get_unnary()
{
	cout <<"Dollar: "<< usd << "  " << "SyrianP: "<< syp << endl;
}

unnary::~unnary()
{
}
