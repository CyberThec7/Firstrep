#pragma once
#include <iostream>
using namespace std;

class Car
{ 
private:
	string mark/*= "Audi"*/;
	int model/*= 2020;*/;
	string color/* ="weinrot"*/;
public:
	void set_mark(string m);
	void set_model(int y);
	void set_color(string c);
	string get_mark();
	int get_model();
	string read_color();
};



