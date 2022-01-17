#include <iostream>
using namespace std;
#include <cmath>
void SY_Plane(int, string);
int main()
{
	string Tittel;
	
	cout << "please enter ur fucking Tittel";
	cin >> Tittel;
	SY_Plane(119, Tittel);
	cout << "please enter ur fucking Tittel";
	cin >> Tittel;
	SY_Plane(119, Tittel);
	cout << "please enter ur fucking Tittel";
	cin >> Tittel;
	SY_Plane(119, Tittel);
	
	
}
void SY_Plane(int x, string Tittel)
{
	
	static int t_nr = 0;
	
	cout << "\t \t *************************************** \n";
	cout << "Flight Number:  " << x << "\n";
	cout << "ticket number:  " << ++t_nr << "\n";// wenn t_nr++ er beginnt mit 0 nicht 1
	cout << "ticket_name:  " << Tittel << "\n";
}/*
#include <iostream>
using namespace std;
#include <cmath>
void SY_Plane(int, string);
int main()
{
	string Tittel;
	for (int i = 1; i <= 10; i++)
	{cout << "please enter ur fucking Tittel";
	cin >> Tittel;
	SY_Plane(119, Tittel);
	}
}
void SY_Plane(int x, string Tittel)
{

	static int t_nr = 0;

	cout << "\t \t *************************************** \n";
	cout << "Flight Number:  " << x << "\n";
	cout << "ticket number:  " << ++t_nr << "\n";
	cout << "ticket_name:  " << Tittel << "\n";
}*/
