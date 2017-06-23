#pragma once
#include<iostream>
using namespace std;
class point
{
protected:
	float x, y;
	point(float _x = 0, float _y = 0) :x(_x), y(_y) {}
	void set_point(float _x = 0, float _y = 0) { x = _x; y = _y; }
	float get_x()const { return x; }
	float get_y()const { return y; }
	friend ostream & operator <<(ostream & out, const point & source)
	{
		out << '[' << source.x << ',' << source.y << ']' << endl;
		return out;
	}

};