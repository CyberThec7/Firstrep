#include "Cars.h"
#include <iostream>
using namespace std;

int Cars::z�hler = 0;
int Cars::get_z�hler()
{
	return z�hler;
}

int Cars::add(int i, int j)
{
	return i + j;
}

float Cars::multi(int i, float j)
{
	return i * j;
}
float Cars::substruct(float i, float j)
{
	return i - j;
}
Cars::Cars()
{
	z�hler++;
}
Cars::~Cars()
{
	z�hler--;
}

void Cars::dissplay(string t, int m, string c)
{
	cout << " marke: " << t << " model: " << m << " color: " << c << endl;
}
