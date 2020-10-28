#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 0.0;
	center;
}

Circle::Circle(double r, Point p) {
	radius = r;
	center = p;
}

Circle::Circle(Point p,double r ) {
	radius = r;
	center = p;
}

Circle::Circle(const Circle &r) {
	radius = r.radius;
	center = r.center;
}

void Circle::set_radius(double r) {
	radius = r;
}

double Circle::get_radius() {
	return radius;
}

void Circle::print()const {
	cout << "The radius is "
		<< radius << endl;
}

void Circle::input() {
	double rad = 0.0,
		x = 0.0,
		y = 0.0;

	cin >> rad >> x >> y;
	this->set_radius(rad);
	center.set(x, y);
}

double Circle::circumference()const {
	return 2.0 * 3.14 * radius;
}

double Circle::area()const {
	return 3.14 * (radius * radius);
}