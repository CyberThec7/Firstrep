#include <iostream>
using namespace std;
#include "father.h"
#include "mother.h"
#include "son.h"

int main()
{
	son s;
	s.father::set_nachname("Ahmeto");// wenn 2 atribute exstieren bei zwei klassen, die geben andere klass die gleiche atribut
	s.print();
}