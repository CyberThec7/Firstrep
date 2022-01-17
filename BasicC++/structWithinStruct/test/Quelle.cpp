#include <iostream>
using namespace std;
// struct within struct example :
struct ID_type
{
	int stu_ID;
	int matir_ID;
};
struct name_type
{
	string stu_na;
	string matir_na;
};
struct zahl_type
{
	int stu_zahl;
	int matir_zahl;
};
struct stu_data
{
	ID_type ID;
	name_type name;
	zahl_type zahl;	
};

int main()
{
	stu_data st1;
	cin >> st1.ID.stu_ID;
	cout << st1.ID.stu_ID << endl;
	cout << " please enter matrial name" << "\n";
	cin >> st1.name.matir_na;
	cout << st1.name.matir_na;

	//***** here different ways to write struct with object:
	
	struct Book {
		string title;
		string author;
		double price;
		int numberOfPages;
	};
	struct Book book;
	// oder :
	struct Book {
		string title;
		string author;
		double price;
		int numberOfPages;
	} book;
	// oder:
	struct Book {
		string title;
		string author;
		double price;
		int numberOfPages;
	};
	// book3 و الثالث إسمه book2 الثاني إسمه ,book1 الأول إسمه ,Book هنا بإنشاء ثلاث كائنات من
	
	// oder:
	struct Book {
		string title;
		string author;
		double price;
		int numberOfPages;
	};
	// book3 و الثالث إسمه book2 الثاني إسمه ,book1 الأول إسمه ,Book هنا بإنشاء ثلاث كائنات من
	struct Book book1, book2, book3;
	int main ()
	{ 
	struct Book book1;
	struct Book book2;
	struct Book book3;
	}




	

}