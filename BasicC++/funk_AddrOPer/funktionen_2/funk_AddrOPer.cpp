#include <iostream>
using namespace std;
void swap(int&, int&);
int main()
{
		// &طباعة عنوان المساحة المخصصة لأي متغير تم تعريفه في الذاكرة نضع قبل إسمه 
		// كما سنرى في المثال التالي :
		int x = 5;
		cout << "Address of x in the Memory is:  " << &x << endl;
		int b = 5;

		// في الذاكرة x يشير بنفس عنوان المتغير y هنا قمنا بتعريف متغير إسمه
		int& y = b;

		// x و التي هي نفسها قيمة المتغير y هنا قمنا بتغيير قيمة المتغير
		y = 7;
		// للتأكد ما إن كانا يحتويان على نفس القيمة الجديدة و التي هي 7 y و x هنا قمنا بطباعة قيمة المتغيرين
		cout << "b = " << b << endl;
		cout << "y = " << y << endl;
		// die Werte Wechseln :
	int n = 120, m = 340;
	swap(n, m);
	cout << "n becomes " << n << "\n";
	cout << "m becomes " << m << "\n";
	return 0;
}
void swap(int &x, int &y)
{
	int d = x;
	x = y;
	y=d;
}/* bitte Arschloch achten: auf die Reihenfolge von d=a dann a=y dann y=d nicht d= y sonst wird nicht gewechselt werden*/// *******WIICHTIG***********

