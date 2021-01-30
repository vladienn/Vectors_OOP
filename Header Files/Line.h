#pragma once
#include "Vector.h"

class Line:public Vector
{
public:
	Line(const Point & = Point(),const Point & = Point());
	Line(const Point &, const Vector &);
	Line(const Line&);
	virtual ~Line();

	Line& operator=(const Line&);
	Vector lineDirection() const;
	Vector normalVector() const; 
	double angleLine(const Line&) const;

	bool operator+(const Point&) const;
	bool operator||(const Line&) const;

	virtual std::ostream& print(std::ostream&) const;
	virtual std::istream& input(std::istream&);
protected:
	Point A;
};