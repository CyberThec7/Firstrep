#include <iostream>
using namespace std;
#include "really.h"

int main()
{
	really r1;
	r1.set_miete(-40);
	really r2;
	r2.set_grösse(-200.2);
	cout << r1.get_miete() << endl;
	cout << r2.get_grösse() << endl;

	// nun overloading (methoden zu einfügen :
	really r3;
	r3.miet(23.3, 12.2);// dass kannst du einfach nicht schreiben da es wird wiederholt 
	cout << r3.miet(23.3, 12.2) << endl;// plese attention : du musst die Werte schreiben sonst error cout
	//really r6;
	//r6.miet(34, 23.5); // ?????? warum falsch 
	// nun Constructor Overloading :
	really n(55, 21.3);
	cout << n.get_grösse() << endl;
	really n1;
	really n2(23, 13.6);
	really n5(n2);
	really n7 = n1;
	n5.get_really();
	n5.set_really(43, 78.8);// ** loock really.h
	n1.get_really();
	n2.get_really();
	n7.get_really();
	n5.get_really();
	//cout << n7.get_miete();// wenn ** eingesetzt werden

	//  nun(3) The default Copy Constructor : das heißt copy von einem object:
	really obj1(17, 55.4);
	really obj2(50, 44.1);
	really obj3;
	obj3 = obj1.add(obj2);
	obj3.get_really();
	
}