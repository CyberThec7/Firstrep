#pragma once
class really
{
private:
	int miete;
	float gr�sse;
	


public:

	void set_miete(int m);
	void set_gr�sse(float g);
	// nun(1) overloading (methoden zu einf�gen) :
	float miet(float ,int );
	//float miet(int, float); warum falsch ??????
	double miet(float, double);
    float miet(float, float);
	// nun (4) Passing objects To Methods
	really add(really t1);

	int get_miete();
	float get_gr�sse();

	
	// nun (2) Constructor Overloading and(3) default Copy Constructor :
	really();
	really(int q, float p);

	// nun(3) The default Copy Constructor : das hei�t copy von einem object:
	void set_really(int q, float p);// if we did not write this then when we making object c1 and after that we want chang c1 we can't (loock ** in Quelle.cpp)
	void get_really();// das kann nicht n�tig da ich get miete und gr�sse habe
	~really();
};

