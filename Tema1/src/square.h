#pragma once

#include <iostream>
#include "shape.h"

class Square :Shape
{
public:
	Square(const Square& square) :Shape(square), side_lenght(square.side_lenght) {}

	Square(const std::string name, const float side_lenght) : Shape(name) 
	{
		this->side_lenght = side_lenght;
	}

	Square& operator=(const Square& square)
	{
		if (this != &square)
		{
			Shape::operator=(square);
			side_lenght = square.side_lenght;
		}

		return *this;
	}

	void calculate_perimeter() override
	{
		this->perimeter = 4 * this->side_lenght;
	}

	float get_perimeter()
	{
		return Shape::get_perimeter();
	}

private:
	float side_lenght;
};
