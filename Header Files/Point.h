#pragma once
#include "Element.h"
#include<iostream>
class Point: public Element
{
public:
	Point(double = 0., double = 0., double = 0.);
	Point(const Point&);
	Point& operator=(const Point&);

	double getX() const;
	double getY() const;
	double getZ() const;

	void setX(double);
	void setY(double);
	void setZ(double);


	bool operator== (const Point&) const;
	virtual std::ostream& print(std::ostream&) const;
	virtual std::istream& input(std::istream&);
protected:
	double x, y, z;
};

std::ostream& operator<<(std::ostream&, const Point&);
std::istream& operator>>(std::istream&, Point&);