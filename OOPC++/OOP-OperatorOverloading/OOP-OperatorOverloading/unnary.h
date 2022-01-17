#pragma once
#include <iostream>
using namespace std;

class unnary
{
private:
	int usd;
	double syp;
	  unsigned int count;
public:

	int get_count();

	unnary  operator ++();
	unnary  operator --();
	unnary  operator ++(int);
	unnary  operator --(int);
	// Binary overloading: 
	unnary operator +(unnary t);
	unnary operator-(unnary t);
	unnary operator*(unnary t);
	unnary operator/(unnary t);
	unnary operator%(unnary t);
	unnary();
	unnary(int c);
    unnary(int u, double s);
	void get_unnary();
    ~unnary();
};

