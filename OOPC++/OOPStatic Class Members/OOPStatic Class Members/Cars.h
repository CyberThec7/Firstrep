#pragma once
#include <iostream>
using namespace std;
class Cars
{
private:
	string macker;
	string color;
	int model;
	static int z�hler;


public:
	// lektion (1) static z�hler with z�hler++--:
    int get_z�hler();// in main brauchen wir cout da here nicht void sondern int
	// lektion (2) static methoden :
	static int add(int, int);
	static float multi(int, float);
	static float substruct(float, float);
	static void dissplay(string, int, string);
	
	Cars();

	~Cars();

};

