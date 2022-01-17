#include "person.h" 
#include <iostream>
using namespace std;


void person::setname(string n)
{
	name = n;
}

void person::setgender(string g)
{
	gender = g;
}

void person::setage(float a)
{
	age = a;
}

string person::getname()
{
	return name;
}

string person::getgender()
{
	return gender;
}

float person::getage()
{
	return age;
}

person::person():name("unknown, "),gender("unknown, "),age(0)
{
	//cout << "defualtparentsklass name " << name << " gander " << gender << " age " << age << endl;
}

person::person(string n, string g, float a): name (n ),gender(g),age(a)
{

}

void person::get_person()
{
	cout << "name: " << name << " gender: " << gender << " age " << age << endl;
}

person::~person()
{

}
