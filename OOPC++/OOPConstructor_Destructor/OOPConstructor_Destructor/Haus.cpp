#include "Haus.h"
#include <iostream>
using namespace std;
void Haus::set_area(float a)
{
	if (a <= 100 && a >= 80)
		cout << "Das Haus passt,worauf wartest du?!!, du Arschloch, so n Angebot ist seltsam digger ;)" << endl;
	else if (a < 80)
		cout << "Das Haus zu klein men :( " << endl;

	else
		cout << "du arm, das Haus zu gross Bitch, kann nichht gemietet werden :) " << endl;
}
void Haus::set_miete(int m)
{
	if (m <= 600 && m > 0)
		cout << "Das Haus passt dein buddget digger ;)" << endl;
	else if (m == 250)
		cout << "worauf wartest du?!!, du Arschloch, so n Angebot ist seltsam -_- !!" << endl;
	else if (m < 0)
		cout << "Error, no Miete wird in minus sein fotze :)) " << endl;
	else
		cout << "du arm, das Haus zu teuer Bitch :) " << endl;
}
void Haus::set_geschoss(int g)
{
	if (g == 0 || g == 1 || g == 2)
		cout << "es passt :)" << endl;
	else 
		cout << "passt nicht :("<< endl;
}
void Haus::set_anzahl_garage(int lg)
{
	if (lg == 2)
		cout << "passt :)" << endl;
	else
		cout << "passt nicht :(" << endl;
}
void Haus::set_heizung(string h)
{
	if (h == "gas")
		cout << "passt :) " << endl;
	else
		cout << "passt nicht :( " << endl;
}
void Haus::set_küche(string k)
{
	if (k == "einbau")
		cout << "passt :) " << endl;
	else
		cout << "passt nicht :( " << endl;
}
Haus::Haus()
{
	area = 95;
	miete = 490;
	geschoss = 0;
	anzahl_garage = 2;
	heizung = "diesel";
	küche = "einbau";
}
Haus::~Haus()
{

}