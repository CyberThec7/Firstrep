#pragma once
#include <iostream>
using namespace std;

class hemd
{
private:
	string color;
	string material;
	float gr�sse;
public:
	void setcolor(string c);
	void setmaterial(string m);
	void setgr�sse(float g);
	
	string getcolor();
	string getmaterial();
	float getgr�sse();
	hemd();
	hemd(string o, string t, float r);
	~hemd();
};

