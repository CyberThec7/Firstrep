#include <iostream>
using namespace std;
#include"bClass.h"
#include "poly.h"
#include "rectangle.h"



int main()
{
	/*rectangle r(23, 13); 
	bClass* p;
	p = &r;
	poly o(34);
	
	bClass* p1;
	p1 = &o;         
	p->area();
	cout << p->area();*/
	rectangle r;
	poly p;// if u did not make set_value u will get error coz u mus6t write like that rectangle r(23,45); that will be with constructer 
	bClass* b;
	bClass *b1;
	b = &r;
	b1 = &p;
	b->set_value(23, 13);
	cout << "first time:    " << b->area()<< endl;

	b->set_value(3, 5);
	cout << "second time:    " << b->area()<< endl;
	p.set_value(15);
	cout << b1->area() << endl;

}