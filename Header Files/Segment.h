#pragma once
#include "Line.h"

class Segment:public Line{
public:
	Segment(const Line & = Line(), double = 0., double = 0.);
	Segment(const Segment&);
	Segment& operator=(const Segment&);

	double segmentLength() const;
	Point segmentCenter() const;

	bool operator==(const Point&) const;

	virtual std::ostream& print(std::ostream&) const;
	virtual std::istream& input(std::istream&);
private:
	double start, end;
	Point point_start;
	Point point_end;
};

