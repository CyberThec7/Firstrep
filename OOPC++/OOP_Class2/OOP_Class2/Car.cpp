#include "Car.h"

void Car::set_mark(string m)
{
	//mark = m;
	if (m == "Audi" || m ==  "Mersedece" || m ==   "BMW")
		mark = m;
	else
		cout << "This car not belonge to us " << "\n";
}
void Car::set_model(int y)
{
	//model = y;
	if (y == 1990 || y == 1999 || y == 2006 || y == 2020 )
		model = y;
	else
		cout << "This car not belonge to us " << "\n";
}
void Car::set_color(string c)
{
	//color = c;
	if (c == "schwarz" || c == "rot" || c == "weinrot" || c == "grün")
		color = c;
	else
		cout << "This car not belonge to us " << "\n";
}

string Car::get_mark()
{
	return mark;
}

int Car::get_model()
{
	return 0 ;
}

string Car::read_color()
{
	return color;
}
