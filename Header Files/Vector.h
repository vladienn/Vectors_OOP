#pragma once
#include "Point.h"
#include<iostream>
#include<exception>
class Vector:public Point{
public:
	Vector(const Point&, const Point&);
	Vector(double = 0., double = 0., double = 0.);
	Vector(const Vector&);
	virtual ~Vector();
	Vector& operator=(const Vector&);

	double vectorLength() const;
	Vector vectorDirection();
	bool isNullVector() const;
	bool isParralel(const Vector &) const;
	bool isPerpendicular(const Vector&) const;
	
	Vector operator+(const Vector &) const;
	Vector operator-(const Vector&) const;
	double operator*(const Vector&) const;
	Vector operator^(const Vector&) const;
	double operator()(const Vector&, const Vector&) const;

	virtual std::ostream& print(std::ostream&) const;
	virtual std::istream& input(std::istream&);
};

Vector operator*(double,const Vector &);

class VectorLengthException:public std::exception{
public:
	VectorLengthException(const char*);
	const char* what() const;
private:
	const char* reason;
};