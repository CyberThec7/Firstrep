#include <iostream>
using namespace std;
#include "unnary.h"

int main()
{
	unnary u(8);
	unnary u1(67);
	unnary u2 = ++u1;
	cout << u2.get_count()<<endl;
	unnary u6=u--;
	cout << u6.get_count()<<endl;
	unnary t(12, 205.6);
	unnary t1(50, 900.3);
	unnary t2= t + t1;
	unnary t3 = t2 -t1;
	unnary t4 = t2 / t3;
	unnary t5 = t * t1;
	unnary t6 = t % t1;
	t2.get_unnary();
	t3.get_unnary();
	t4.get_unnary();
	t5.get_unnary();
	t6.get_unnary();// Modolo funktioniert nur mit int *****
}