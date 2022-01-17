#pragma once
#include <iostream>
using namespace std;


class mother
{
private:
	string fach;
	string nachname;

public:
	void setfach(string);
	string getfach();
	void set_nachname(string);
	
	void print();

	mother();
	mother(string , string );
	~mother();
};

