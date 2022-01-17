#pragma once
#include <iostream>
using namespace std;



class father
{
private:
	string nachname;
	string name;
	int age;
public:
	void set_nachname(string);
	void print();

	father();
    father(string nc, string n,int a);
	~father();
};

