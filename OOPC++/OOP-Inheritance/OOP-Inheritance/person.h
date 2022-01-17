#pragma once
#include <iostream>
using namespace std;


class person
{
private:
	string name;
	string gender;
	float age;
public:
	void setname(string);
	void setgender(string);
	void setage(float);
	
	string getname();
	string getgender();
	float getage();
	

	person();
	person(string, string, float);
	void get_person();
	~person();
};

