#pragma once
#include<iostream>

class Element {
public:
	virtual std::ostream& print(std::ostream&) const = 0;
	virtual std::istream& input(std::istream&) = 0;
};