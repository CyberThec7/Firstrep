#pragma once
class rectangle
{
private:
	float length;
	float width;
public:
	void set_length(float l);
	void set_width(float w);
    float get_length();
	float get_width();

rectangle(float l, float w );// wird erkl�rt bei rectangle.ccp
~rectangle();
};


