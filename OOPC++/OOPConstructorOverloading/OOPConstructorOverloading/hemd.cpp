#include "hemd.h"
#include <iostream>
using namespace std;
void hemd::setcolor(string )
{

}
void hemd::setmaterial(string )
{
}
void hemd::setgrösse(float )
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
float hemd::getgrösse()
{
	return grösse;
}
hemd::hemd():color ("black") , material ("coton"), grösse (34.2)
{
}
hemd::hemd(string o, string t, float r) : color(o), material(t), grösse(r)
{

}
hemd::~hemd()
{
	cout << "hope you understanding what i said ;) " << endl;
}
