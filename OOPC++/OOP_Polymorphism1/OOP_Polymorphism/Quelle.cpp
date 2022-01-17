#include <iostream>
using namespace std;
#include"shape.h"
#include "recta.h"
#include "polyg.h"

int main()
{
	recta r(45, 63);// we connt write recta r; coz it is constructer we must write recta(...,...); w

	polyg p(5);
	shape* s1, * s2,*s3;
	s1 = &r;
	s2 = &p;
	cout << "Area is: recta:  "<< s1->area() << endl;
	cout << "Area is: polyg:  " << s2->area() << endl;
	recta r1(73, 66);
	s3 = &r1;
	cout << "Area is: recta:  " << s3->area() << endl;
}