#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"


#include <iostream>

using namespace std;


int main()
{
	double circ, area, vol, surf_area;

	cout << "\n\nTesting of empty Point, Circle, Cylinder objects..." << endl;
	Point ep1;
	ep1.print();
	Circle ec1;
	ec1.print();
	Cylinder ey1;
	ey1.print();

	cout << "\n\nTesting of constant Point, Circle, Cylinder objects..." << endl;
	// create and print out a const Point object
	cout << "\nPoint info..." << endl;
	const Point center1(2, 3);
	center1.print();

	// create and print out a const Circle object
	cout << "\nCircle info..." << endl;
	const Circle cir1(center1, 5.5);
	cir1.print();

	circ = cir1.circumference();
	cout << "Circumference: " << circ << endl;
	area = cir1.area();
	cout << "Area: " << area << endl;

	// create and print out a const Cylinder object
	cout << "\nCylinder info..." << endl;
	//const Cylinder cyl1(center1, 3.4, 10);
	const Cylinder cyl1(cir1, 10);
	cyl1.print();

	circ = cyl1.circumference();
	cout << "Cyl Circumference: " << circ << endl;
	area = cyl1.area();
	cout << "Cyl Circle Area: " << area << endl;
	surf_area = cyl1.surface_area();
	cout << "Cyl Surface Area: " << surf_area << endl;
	vol = cyl1.volume();
	cout << "Cyl Volume: " << vol << endl;

	cout << "\n\nEnter in Point, Circle, Cylinder info..." << endl;

	// Allow user to enter in Point object and print out
	cout << "\nEnter in Point info..." << endl;
	Point center2;
	center2.input();
	cout << "You entered: " << endl;
	center2.print();

	// Allow user to enter in Circle object and print out
	cout << "\nEnter in Circle info..." << endl;
	Circle cir2;
	cir2.input();
	cout << "You entered: " << endl;
	cir2.print();

	// Allow user to enter in Cylinder object and print out
	cout << "\nEnter in Cylinder info..." << endl;
	Cylinder cyl2;
	cyl2.input();
	cout << "You entered: " << endl;
	cyl2.print();

	// Print out info for the user entered Point
	cout << "\nPoint info..." << endl;
	center2.print();

	// Print out info (center, radius, circumference, area) for the user entered Circle
	cout << "\nCircle info..." << endl;
	cir2.print();

	circ = cir2.circumference();
	cout << "Circumference: " << circ << endl;
	area = cir2.area();
	cout << "Area: " << area << endl;

	// Print out info (center, radius, height, circumference, area, volume, surface area) for the user entered Cylinder
	cout << "\nCylinder info..." << endl;
	cyl2.print();

	circ = cyl2.circumference();
	cout << "Cyl Circumference: " << circ << endl;
	area = cyl2.area();
	cout << "Cyl Circle Area: " << area << endl;
	surf_area = cyl2.surface_area();
	cout << "Cyl Surface Area: " << surf_area << endl;
	vol = cyl2.volume();
	cout << "Cyl Volume: " << vol << endl;
	system("pause");
	return 0;
}