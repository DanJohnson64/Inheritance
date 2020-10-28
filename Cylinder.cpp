#include "Cylinder.h"
#include <iostream>
using namespace std;

Cylinder::Cylinder() : base() {
	height = 0.0;
}

Cylinder::Cylinder(Circle b, int h) : base(b){

	height = static_cast<double>(h);
}

void Cylinder::input() {
	double rad = 0.0,
		   x = 0.0,
		   y = 0.0;
			
	cin >> height >> rad >> x >> y;
	base.set_radius(rad);
	center.set(x, y);
}

double Cylinder::volume() const {
	return base.area() * height;

		
}

double Cylinder::surface_area() const {
	return (2.0 * base.circumference()) * (2.0 * base.area());
}

double Cylinder::circumference()const {
	return base.circumference();
}

double Cylinder::area()const {
	return base.area();
}

void Cylinder::print()const {
	cout << "cyl1 Circumference is " << base.circumference() << endl;
	cout << "cyl1 Circle area is " << base.area() << endl;
	cout << "cyl1 Surface Area is " << this->surface_area() << endl;
	cout << "cyl1 volume is " << this->volume() << endl;

}