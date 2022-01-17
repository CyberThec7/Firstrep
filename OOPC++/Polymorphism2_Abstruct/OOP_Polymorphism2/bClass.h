#pragma once
#include <iostream>
using namespace std;
class bClass
{
protected://****WICHTIG******+
	int length, width;

public:
	void set_value(int, int);
	 virtual int area() = 0;// das heiﬂt : pure virtual function
	 /*
		when the clas has a pure virtual function, it be changed to **Abstract class**
		that mean you can not mack any objrct just **** pointers ****
		*/


};

