#include "Cars.h"
#include <iostream>
using namespace std;

int Cars::zähler = 0;
int Cars::get_zähler()
{
	return zähler;
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
	zähler++;
}
Cars::~Cars()
{
	zähler--;
}

void Cars::dissplay(string t, int m, string c)
{
	cout << " marke: " << t << " model: " << m << " color: " << c << endl;
}
