#pragma once
#include<iostream>
using namespace std;

class cars
{
private :
	string  name;
	string  color;
	int maxspeed;
	int model;
public:
	void setname(string);
	void setcolor(string);
	void setmaxspeed(int);
	void setmodel(int);

	string getname();
	string getcolor();
	int getmaxspeed();
	int getmodel();
	void print();
};

