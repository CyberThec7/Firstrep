#pragma once
class Distance1
{

	private:
		int feet;
		float inches;
	public:
		void set_feet(int);
		void set_inches(float);
		int get_feet();
		float get_inches();

		Distance1();
		Distance1(int f, float i);
		void set_Distance1(int, float);// damit er die werte ändern kann
		void get_Distance1();// das in quelle.cpp(main) braucht kein cout sondern d1. bla bla bla
		~Distance1();
	
};

