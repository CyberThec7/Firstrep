#include <iostream>
#include <cmath>
using namespace std;
int Größer(int, int);
float area(float);
double volume(double);
double Sum(int, int, int);
double AVG(int , int, int);
void functionn();
int main()
{
	int n1, n2, result;
	cout << " bitte schreib 2 integer nummern \n ";
	cin >> n1 >> n2;
	result = Größer(n1, n2);
	cout << "bla bla bla is " << result << "\n";
	float g1;
	int w1, w2, w3;
	cout << "enter raduis \n ";
	cin >> g1;
	cout << "the area is " << area << "\n";
	cout << "the volume is " << volume << "\n";
	cout << "enter 3 integer Nummer \n";
	cin >> w1 >> w2 >> w3;
	cout << "Die Summe ist " << Sum << "\n";
	cout << "Die Avarege ist " << AVG << "\n";
	functionn();
}
int  Größer(int num1, int num2)
{

	if (num1 > num2)
		return num1;
	else
		return  num2;
}
float area(float Radius)
{
	float pi = 3.14, result;
	result = 4 * pi * Radius * Radius;
	return result; /*du kannst ohne result und pi : float area(float Radius)
				   {
					 return 4 * 3.14 * Radius * Radius;
				   }*/
}
double volume(double Radius)
{
	float pi = 3.14, result;
	result = 3 / 4 * pi * Radius * Radius * Radius;
	return result; /* double volume(double Radius)
				   {
					return 3 / 4 * 3.14 * Radius * Radius * Radius;
				   }*/
}
double Sum(int a, int b, int c)
{
	return a + b + c;

}
double AVG(int a, int b, int c)
{
	return Sum(a, b, c) / 3;
}

void functionn()
{
	int x = 384;
	x++;
	cout << "the new X :" << x << endl;
}
