#include <iostream>
using namespace std;
int sum = 100;
int main()
{
  sum = 10; //da ist sum ge�ndert

	cout << sum << "\n";// Da hat sum neuen Wert 10 nicht 100 und kann jemand immer sum �ndern


}
#include <iostream>
using namespace std;
const int sum = 100; // const hei�t dieses Wariabel darf nicht ge�ndert werden read only
int main()
{
	 sum = 10; // ***ERROR***


	cout << sum << "\n";
}
// STATIC VARIABEL: in diesem Beispiel ganz unten
#include <iostream>
using namespace std;
#include <cmath>
void SY_Plane(int, string);
int main()
{
	string Tittel;

	cout << "please enter ur fucking Tittel";
	cin >> Tittel;
	SY_Plane(119, Tittel); // das ist f�r erste cout und cin
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
	cout << "ticket_name:  " << Tittel << "\n";
	cout << "ticket number:  " << ++t_nr << "\n";
}