#pragma once
#include <string>
//******* Zweite Möglichkeit nen Class zu schreiben
using namespace std;
class Haus
{
private:

	float area;
	int miete;
	int geschoss;
	int anzahl_garage;
	string heizung;
	string küche;
public:
	void set_area(float a);
	void set_miete(int m);
	void set_geschoss(int g);
	void set_anzahl_garage(int lg);
	void set_heizung(string h);
	void set_küche(string k);
	float get_area()
	{
		return area;
	}
	int get_miete()
	{
		return miete;
	}
	int get_geschoss()
	{
		return geschoss;
	}
	int get_anzahl_garage()
	{
		return anzahl_garage;
	}
	string read_heizung()
	{
		return heizung;
	}
	string read_küche()
	{
		return küche;
	}



Haus();
~Haus();
};
