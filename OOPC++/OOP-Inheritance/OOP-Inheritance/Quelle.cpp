#include <iostream>
using namespace std;
#include "student.h"
#include "master.h"
void main()
{
	student s1;
	s1.setname("Alaa Ayash my Love ;)");
	s1.setgender("Female");
	s1.setage(109);
	s1.setdepart("Makhaber");
	s1.setgpa(1.3); 
	s1.get_student();
		
	person p;
	student s;
	student s2 (12, 1.2, "FI_ae","Wahab","Male",33);
	s2.get_student();
	master m(23, 1.3, "km", "Lolo", "fmale", 25, "Nano Tech");
	m.get_research_interset();
	
}