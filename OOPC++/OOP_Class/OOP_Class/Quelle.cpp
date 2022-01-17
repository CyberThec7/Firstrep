#include <iostream>
using namespace std;
//******* Erste Möglichkeit nen Class zu schreiben
class rectangle
{
private:
	float length=5;
	float width=3;
public:
	void setlength(float l)
	{
		if (l > 0)
			length = l;
		else
			cout << " ERROR, Arschloch kann nur positiver Wert \n";
	}
	void setwidth(float w)
	{
		if (w > 0)
			width = w;
		else
			cout << " ERROR, Arschloch kann nur positiver Wert \n";
	}
	float getlength()
	{
		return length;
	}
	float getwidth()
	{
		return width;
	}
	float calc_area()
	{
		return length * width;
	}
};
int main()
{
	rectangle box;
	box.setlength(-33.45);
	box.setwidth(-20.13);
	cout << "Area of ur fuckin recta is : " << box.calc_area() << "\n";
	rectangle box1;
	box1.setlength(33.45);
	box1.setwidth(20.13);
	cout << "Area of ur fuckin recta is : " << box1.calc_area() << "\n";

}