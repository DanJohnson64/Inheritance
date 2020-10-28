#pragma once
#include "Point.h"

class Circle {

protected:
	double radius;
	Point center;

public:
	Circle();
	Circle(double r, Point p);
	Circle(Point p,double r );
	Circle(const Circle &b);

	void set_radius(double r);
	double get_radius();
	void print()const;
	void input();
	double circumference()const;
	double area()const;
};