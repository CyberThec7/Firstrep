#include "student.h"

student::student() :person(),level(0),gpa(0),depart("IT")
{
	//cout << "defualt childklass level  " << level << " gpa  " << gpa << " depart  " << depart << endl;
}// here I've to write all element first of the parents class then of the child class like this : 
student::student(int l, float gp, string d, string n, string g, float a):person(n, g,a),level(l),gpa(gp),depart(d)
{
	//cout << "childklass level* " << level << " gpa* " << gpa << " depart* " << depart << endl;
}

void student::get_student()
{
	person::get_person();// das heißt overriding :
	cout << " level* " << level << " gpa* " << gpa << " depart* " << depart << endl;
}

student::~student()
{
}

void student::setlevel(int l)
{
	level = l;
}
     
void student::setgpa(float gp)
{
	gpa = gp;
}

void student::setdepart(string d)
{
	depart = d;
}

int student::getlevel()
{
	return level;
}

float student::getgpa()
{
	return gpa;
}

string student::getdepart()
{
	return depart;
}
