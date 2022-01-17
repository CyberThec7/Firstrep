#include <iostream>
using namespace std;
// WICHTICH ZU WISSEN: WENN DIE FUNKTION KEINEN WERT ZURÜCKGEBEN DANN NUTZEN WIR VOID ********
void Mtrix_druck(int[][4], int);
int main()
{
	int Matrix[4][4];
	cout << " enter ur fucking numbers \n";
	for (int i = 0; i < 4; i++)
		for ( int x = 0; x < 4; x++)
			cin >> Matrix [i][x];
	int sum=0;
	for (int z = 0; z < 4; z++)
		for (int v = 0; v < 4; v++)
		{ 
			sum += Matrix[z][v];
		}
		int sumdi = 0;
		for (int z = 0; z < 4; z++)
{
			for (int v = 0; v < 4; v++)
			
				if (z == v)
					sumdi += Matrix[z][v];
}
		cout << sum << "\n";
		cout << sumdi << "\n";
		// nundrucken wir die Matrix so:
		
		for (int u = 0; u < 4; u++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << Matrix[u][j] << "\t";

			}
			cout << "\n";
		}
		// nun wollen wir die Matrix ausdrucken durch ne FUNKTION
		cout << "\n";
	 	 Mtrix_druck(Matrix , 4);
}
void Mtrix_druck(int c[][4], int f)
{
	for (int u = 0; u < f; u++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << c[u][j] << "\t";

		}
	cout << "\n";
    }
}