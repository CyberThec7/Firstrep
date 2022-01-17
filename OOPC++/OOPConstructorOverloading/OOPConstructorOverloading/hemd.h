#pragma once
#include <iostream>
using namespace std;

class hemd
{
private:
	string color;
	string material;
	float grösse;
public:
	void setcolor(string c);
	void setmaterial(string m);
	void setgrösse(float g);
	
	string getcolor();
	string getmaterial();
	float getgrösse();
	hemd();
	hemd(string o, string t, float r);
	~hemd();
};

