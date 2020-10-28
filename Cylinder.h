#pragma once
#include "Circle.h"

class Cylinder : public Circle {
private:
	Circle base;
	double height;

public:
	Cylinder();
	Cylinder(Circle b, int h);
	void input();
	double volume()const;
	double surface_area()const;
	double circumference()const;
	double area()const;
	void print()const;
};