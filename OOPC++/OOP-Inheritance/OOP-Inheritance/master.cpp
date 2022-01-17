#include "master.h"
#include <iostream>
using namespace std;

void master::set_research_interset(string)
{
	
}

void master::get_research_interset()
{
	student::get_student();
	cout << "research_interset: " << research_interset << endl;
}

master::master():research_interset("no_value")
{
}// Overriding :
master::master(int l, float gp, string d, string n, string g, float a, string re):student(l,gp,d,n,g,a), research_interset(re)
{
}
// du kannst so schreiben :

//master::master(int l, float gp, string d, string n, string g, float a, string re)
//	: student(l, gp, d, n, g, a), research_interset(re)
//{
//}
master::~master()
{
}
