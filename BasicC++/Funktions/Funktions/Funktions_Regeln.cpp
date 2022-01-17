// Nicht stellen alle regeln oder lösungen in einer Funktion, sondern teilen die in kleinen Funktionen, sowie du sollst eine Funk mendestens ein mal.
/*
wenn die Funktion was machen soll und inhalt (input) braucht,  dann heißt die inhalt parameter list   
wenn die funktion was zurückgeben soll, dann soll der art bei return festgelegt (int,float,double...etc) 
wenn die funktion nix zurückgeben dann nutzen wir void

es gibt viele arten von festgelegten Funktionen:
floor(X) : double floor (double number);
pow(X,y) heißt x hoch y double pow (double base , double exponent );
sqrt (x) heißt square of 4 is 2  double sqrt (double nuber); جذر تربيعي
abs (x) heißt absolut (X) : abs (-5) = 5 int abs (int number);
ceil (X) 
alle vorherigen Funktionen sind mit Library <cmath>
*/
// DAS REGEL BEI <cmath> FUNKTION :

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Z = 5.21;
	int n = -5;
	double k = 4.3;

 cout <<"floor of Z is " << floor(Z)<< "\n";
 cout << "abs of Z is " << abs(n) << "\n";
 cout << "pow of (Z,n) is " << pow(Z,n) << "\n";
 cout << "ceil of Z is " << ceil(k) << "\n";
}
/*
 the second types of functions is :
 user defined function (that you make it)
 so must this function include 1. header 2.body 3. function definition 
*/
// DAS REGEL BEI <cmath> FUNKTION :
#include <iostream>
#include <cmath>
using namespace std;
int function_name(int, int);// ::: function header ::: hier muss man nicht  schreiben (int x, int y) reicht (int,int)
int main()
{
	// ***** function body ****
	int n1, n2, result;
	cout << " bitte schreib 2 integer nummern \n ";
	cin >> n1 >> n2;
	result = function_name(n1, n2);
	cout << "bla bla bla is " << result << "\n";
	/*int, da result wird nicht am anfang definiert*/result = function_name(n1, n2); // hier wird die WERT nur in result gespeichert, um später zu nutzen.
	/*int, da result wird nicht am anfang definiert*/result = function_name(n1, n2) + 25 / 119; // hier die WERt wird in einem Mathimatische operation genutzt.

}
int function_name(int num1, int num2) // hier muss man die Namrn von Variabeln schreiben (int x, int y) *** function definition ***
{
	// da schreibt man was dir funktion machen soll, z.B. :
	int max;
	if (num1 > num2)
		max = num1; // ***::: Am besten ohne Max so: if (num1>num2) return num1
	else
		max = num2;
	return max; // else return num2
}