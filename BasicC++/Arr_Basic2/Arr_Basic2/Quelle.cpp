#include <iostream>
using namespace std;
float ARR(int[], int); // damit keine Veränderung im ARR schreiben wir : const so : float  ARR(const  float[],int)
bool find_item(int [], int, int);
int main()
{
	int sal[5];
	cout << ARR(sal, 5)<< "\n";
	// um die elemente vion einer ARRAy zu anderer, müssen wir FOR loop nutzen so:
	int list1[5] = { 65,94,58,20,34 };
	int list2[5];
	for (int i = 0; i < 5; i++)
	{
		list2[i] = list1[i];
		cout << list2[i];
	}
	find_item(list2, 5, 67);
	if (find_item(list2, 5, 67)== true)
	cout << "the Item is here \n";
	else 
		cout << "the Item is not here \n";
	float s;
	cout << "bitte trag ne Nummer ein \n";
	cin >> s;
	find_item(list2, 5, s);
	if (find_item(list2, 5,s) == true)
		cout << "the Item is here \n";
	else
		cout << "the Item is not here \n";
}
float ARR(int x[], int y)
{
	float sum = 0.0;
	for (int i = 0; i < y; i++)
	{
		cin >> x[i];
		sum += x[i];
	}
	return sum / y;
}
bool find_item(int e[], int y, int searchedItem)
  {
	bool found = false;
	for (int i = 0; i < y; i++)
	{
		if (e[i] == searchedItem)
			found = true;
	}
	return found; 
  }
	
