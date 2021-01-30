#pragma once
#include "Point.h"
#include "Vector.h"
#include<iostream>
#include<exception>
class Triangle :public Point {
public:
	Triangle();
	Triangle(const Point&, const Point&, const Point&);
	Triangle(const Triangle&);
	Triangle& operator=(const Triangle&);

	void triangleType() const;
	double triangleArea() const;
	double trianglePerimeter() const;
	Point triangleMedicenter() const;
	bool operator<(const Point&) const;
	bool operator>(const Point&) const;
	bool operator==(const Point&) const;

	virtual std::ostream& print(std::ostream&) const;
	virtual std::istream& input(std::istream&);
private:
	Point A, B, C;
};

class EqualPointException :public std::exception {
public:
	EqualPointException(const char*);
	const char* what() const;
private:
	const char* reason;
};