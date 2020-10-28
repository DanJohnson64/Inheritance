#include <iostream>
#include "Point.h"

using namespace std;

Point::Point() {
	x = 0.0;
	y = 0.0;
}

Point::Point(int a, int b){
	x = static_cast<double>(a);
	y = static_cast<double>(b);
}

Point::Point(double a, double b) {
	x = a;
	y = b;
}

void Point::set(double a, double b) {
	x = a;
	y = b;

}

void Point::input() {
	cin >> x >> y;
}

void Point::print() const {
	cout << "(" << x
		 << "," << y
		 << ")" << endl;
}

void Point::print_x() const {
	cout << "x is " << x << endl;
}

void Point::print_y() const {
	cout << "y is " << y << endl;
}
