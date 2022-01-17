#include <iostream>
using namespace std;
int main()
{
	/*
	 macht n' Sound bei anmchen (alert/ alarm
	
	*/
    
	int a = 10;      // a = 10 = 00000000000000000000000000001010
	                 //                                            +
	int b = 75;      // b = 75 = 00000000000000000000000001001011

	int c = a & b;   //***** rechnet die Biär Werte (bits) zwischen die Werte*****  
	int c1 = a | b;   // ***** rechnet die gemeinsame und nicht gemeinsame Binär Werte (Bits) zwischen die Werte**********
	int v = a ^ b;  /*
					   10 = 0000000000000000000000000(0)00101(0)
                                                                   + wird was im () gerechnet heißt die Unterschied wird gesamelt und was ist ähnlich ist 0 geschrieben e
					   75 = 0000000000000000000000000(1)00101(1) 
					                                               =
                        c = 00000000000000000000000001000001
                        c = 65 
				   */
	int w = a + ~ b; // ~ wechselt die 0 zu 1 und die 1 zu 0
	int f = ~ w;
	int g = a << 2; // löscht bits vom links und wechselt die zu 0 und stellt die richts	
	
	int l = a >> 2; // zahl > 0 dann Bits vom richts und zu 0 wechseln und links stellen
	int m= -a >> 2;  // zahl< 0 dann löscht bits vom rechts und 1 wechseln und  links stellen
	int x = 10;
	x <<= 2;
	int t = 10;
	t >>= 2;   //   a  =  a >> 2  =  00000000000000000000000000001010 >> 2  =  00000000000000000000000000000010  =  2
	int h;
		h &= b;   //   a  =  a & b  =  00000000000000000000000000001010  &  00000000000000000000000001001011  =  00000000000000000000000000001010  =  10  Verknüpfung
		int q;
		q |= b;   //   a  =  a | b  =  00000000000000000000000000001010  |  00000000000000000000000001001011  =  00000000000000000000000001001011  =  75 Verknüpfung
	cout << "h = " << h << "\n";
	cout << "q = " << q << "\n";
	cout << t << "\n";
	cout << x << "\n";
    cout << c << "\n";
	cout << a << " | " << b << " = " << c1 << "\n";
	cout << v << "\n";
	cout << w << "\n";
	cout << f << "\n";
	cout << g << "\n";
	cout << m << "\n";
	cout << "Yes, you hear the alert :)\a";
	return 0;



}