#include "hemd.h"
#include <iostream>
using namespace std;
void hemd::setcolor(string )
{

}
void hemd::setmaterial(string )
{
}
void hemd::setgr�sse(float )
{

}
string hemd::getcolor()
{
	return color;
}
string hemd::getmaterial()
{
	return material;
}
float hemd::getgr�sse()
{
	return gr�sse;
}
hemd::hemd():color ("black") , material ("coton"), gr�sse (34.2)
{
}
hemd::hemd(string o, string t, float r) : color(o), material(t), gr�sse(r)
{

}
hemd::~hemd()
{
	cout << "hope you understanding what i said ;) " << endl;
}
