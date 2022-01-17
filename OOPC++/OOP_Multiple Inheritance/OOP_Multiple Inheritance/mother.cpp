#include "mother.h"







void mother::setfach(string f)
{
	fach = f;
}

string mother::getfach()
{
	return fach;
}

void mother::set_nachname(string nh)
{
	
}

void mother::print()
{

}
mother::mother():fach("unknown"), nachname ( "umknown")
{

}
mother::mother(string f, string nh):fach(f),nachname(nh)
{
}

mother::~mother()
	{

	}
