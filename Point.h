#pragma once
class Point {

private:
	double x, y;

public:

	Point();
	Point(int x, int y);
	Point(double x, double y);

	void set(double a, double b);
	void input();
	void print()const;
	void print_x()const;
	void print_y()const;

	

};
