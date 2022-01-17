#include <iostream>
using namespace std;
#include "pers.h"
#include "schuler.h"
#include "emp.h"


int main()
{
	schuler sc;
	sc.set_name_ID_age("Ahmed", 76435, 26);
	sc.setAGP(1.3);
	
	// oder :
	/*sc.setname("Ahmed");
	sc.setID(54354);
	sc.setage(34);
	sc.setAGP(1.3);*/
	sc.print();
	cout << " \t **************** \t " << endl;
	emp e1;
	e1.set_name_ID_age("Mohammad", 7735647, 33);
	e1.set_salary(4.300);
	e1.print();


return 0;
}