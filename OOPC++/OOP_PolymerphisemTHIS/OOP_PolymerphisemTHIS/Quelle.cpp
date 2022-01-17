#include <iostream>
using namespace std;
#include "H.h"
#include "sonH.h"
#include "brH.h"
int main()
{
	sonH s;
	H* h = &s;// heißt early binding
	h->set_value(43, 87);
	h->print_area();
	h->set_value(12, 3);
	h->print_area();
	brH b;
	H* h1 = &b;
	h1->set_value(12, 32);
	H* p[2] = {&s,&b};// warum kann nicht so schreiben : H*p[2]; p[2]= {...};
	for (int i = 0; i < 2; i++)
	{
		p[i]->area();// heißt late binding 
		p[i]->print_area();

	}
}