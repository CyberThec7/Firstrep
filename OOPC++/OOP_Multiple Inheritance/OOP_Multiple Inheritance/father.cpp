#include "father.h"


void father::set_nachname(string nc)
{
	nachname = nc;
}

void father::print()
{

}
father::father():nachname("unkown"), name("unknown"), age(0)
{
}
 
father::father(string nc, string n, int a):nachname(nc),name(n),age(a)
{
}

father::~father()
{
}
