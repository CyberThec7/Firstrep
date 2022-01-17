#include <iostream>
using namespace std;
#include "person.h"
#include "studsent.h"
#include "empl.h"
int main()
{
	/*
		erst bei Print() kein werte drin bei .h und .cpp nur cout nur bei .cpp
		zweitens bei void set_fuck() muss drin werte so set_fuck(string,int,...)
		drittens bei void studsent::setname() oder void studsent::set_fuck() muss werte rein studsent::set_fuck(string n, int i,..) dann
		name = n;
		ID = i;
		vertins bei get immer return so return name; return ID; 
	*/

	studsent stu;
	//stu.setname_ID("MOHAMMAD", 65354309867);
	stu.setname("MOHAMMAD");
	stu.setID(275466);
	stu.print();


}