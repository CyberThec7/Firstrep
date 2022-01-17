#pragma once
#include<iostream>
using namespace std;


class pers
{
private:
	string name;
	int ID;
	int age;
public:
	/*void setname(string);
	void  setID(int);
	void setage(int);*/
	// oder :
	void set_name_ID_age(string,int,int);
	string getname();
	int getID();
	int getage();

	 void print();
	
};

