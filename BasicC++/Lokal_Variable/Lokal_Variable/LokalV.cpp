#include <iostream>
using namespace std;
int sum = 100; // kann irgendwo im Programm verwenden da er ist n' global variable 
int main()
{
	int sum = 10;// sume hier ist ein lokal variable kann nicht auﬂerhalb main verwenden
	// um den global variable verwenden, der selbe name hat, wie ein lokal variable schreiben wir so ::variable

	cout << ::sum << "\n";// da wird sum als global variable gedruckt, das heiﬂt 100.

	{
		int more = 20; // wenn dieses more heiﬂt sum auch dann wird cout << sum = 20 und sum als 10 wird niemals gelesen werden.
		cout << ::sum << "\n";
		cout << sum << "\n"; // kann verwenden 
	
	}
}
#include <iostream>
using namespace std;
int sum = 100; // kann irgendwo im Programm verwenden da er ist n' global variable 
int main()
{
	int sum = 10;// sume hier ist ein lokal variable kann nicht auﬂerhalb main verwenden
	// um den global variable verwenden, der selbe name hat, wie ein lokal variable schreiben wir so ::variable

	cout << ::sum << "\n";// da wird sum als global variable gedruckt, das heiﬂt 100.

	{
		int sum = 20;
		cout << ::sum << "\n";
		cout << sum << "\n";  // wird cout << sum = 20 und sum als 10 wird niemals gelesen werden.

	}
}
#include <iostream> // WICHTIG
using namespace std;
// das global variable kann von irgendwelcher Funktion g‰ndert(umgestellt) werden, deshalb muss man vor schreiben dieses Wort: const 
const int sum = 100; // so kann keine Funktion es ‰ndern (umstellen)
int main()
{
/*
	sum = 2;// hier scheint ERORR da sum definiert nur in einem Block 

	{
		int more = 20; 
		cout << ::sum << "\n";
		cout << sum << "\n"; // kann verwenden

	}*/
}
