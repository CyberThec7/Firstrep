#include <iostream>
using namespace std;
struct employee
{
	int emp_nu;
	string f_name, la_name;
	float salary, bonus, net_salary;
};
struct age
{
	int year;
	float MonthDays;
};
struct Book {
	string title;
	string author;
	double price;
	int numberOfPages;
}book;// oder wir schreiben book nicht da sondern in main wie **
void print(Book)
{
	cout << "Title: " << book.title << "\n";
	cout << "Author: " << book.author << "\n";
	cout << "Price: " << book.price << "$\n";
	cout << "Number of pages: " << book.numberOfPages << "\n";
}
age funk(age , age );
int main()
{
	employee e1, e2;
	e1.emp_nu = 12;
	e1.f_name = "Wahab"; 
	e1.la_name = "Alhamad";
	e1.salary = 3500;
	e1.bonus = 500;
	e1.net_salary = e1.salary + e1.bonus;
	e2 = e1;
	cout << e1.net_salary << endl;
	cout << e2.bonus << endl;
	// wir können gar nicht da vergleichen zwischen e1==e2 oder e1><e2 oder + - * /, sondern e1.bonus ==>< e2.bonus ... usw.
	if (e1.f_name == e2.f_name)
		cout << "the same name huhu " << endl;
	if (e1.net_salary != e2.net_salary && e1.bonus > e2.bonus)
		cout << "really " << endl;
	else
		cout << "komm mal hinter den Baum :) " << endl;
	age man, frau,result;
	cout << "enter age of the man by years then by MonthDays " << endl;
	cin >> man.year >> man.MonthDays;
	cout << "enter age of the frau by years then by MonthDays " << endl;
	cin >> frau.year >> frau.MonthDays;
	cout << man.year <<"  " << man.MonthDays << endl;
	cout << frau.year<<"  " << frau.MonthDays << endl;
	result.year = man.year + frau.year;
	result.MonthDays = man.MonthDays + frau.MonthDays;
	cout << result.year << endl;
	cout << result.MonthDays << endl;
	//struct Book book; hier **
	book.title = "C++ for beginners";
	book.author = "Mhamad Harmush";
	book.price = 9.99;
	book.numberOfPages = 420;
	print(book);// here rief wir die Funktion um zu drucken
	return 0;
} 
age funk(age x, age y)
{
	age erg;
	erg.year = x.year + y.year;
	erg.MonthDays = x.MonthDays + y.MonthDays;
	return erg;
}