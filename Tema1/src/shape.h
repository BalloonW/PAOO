#pragma once

#include <iostream>

class Shape
{
public: 
	// copy constructor 
	Shape(const Shape& shape) : name(shape.name), perimeter(shape.perimeter) {}
	// normal constructor
	Shape(const std::string name) 
	{
		this->name = name;
	}

	// calculate perimeter
	virtual void calculate_perimeter() {}

	float get_perimeter()
	{
		return this->perimeter;
	}

	// copy assignment operator
	Shape& operator=(const Shape& shape)
	{
		// handling assignment to self
		if (this != &shape)
		{
			name = shape.name;
			perimeter = shape.perimeter;
		}
		return *this;
	}

protected:
	std::string	name;
	float perimeter;
};

