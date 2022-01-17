#include <iostream>
using namespace std;
#include "cars.h"


int main()
{
	int n = 0;
    cout << "enter number of line " << endl;
	cin >> n;

	for (int i = 1; i <=n; i++)
	{
		for (int x = 1; x <= i; x++)
		{
			cout <<"*";
		}
			
				
			 cout << endl;
	}

	do {
		cout << "Enter the number of lines:";
		cin >> n;
	} while (n <= 0);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	char end;
	cin >> end;

	cars f;
	f.setname('Audi A8');
	cout << f.getname()<<endl;
	f.setmodel(1994);
	cout << f.getmodel()<<endl;
	//f.print();
	return 0;  
}