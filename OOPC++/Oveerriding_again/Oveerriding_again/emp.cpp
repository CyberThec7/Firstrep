#include "emp.h"

void emp::set_salary(double s)
{
	salary = s;
}
void emp::print()
{
	pers::print();
	cout << "salary: " << salary << endl;
}
