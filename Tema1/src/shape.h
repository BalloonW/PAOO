#include <iostream>
#include <string> 
using namespace std;

class Shape
{
public:
	// normal constructor
	Shape(const std::string name)
	{
		this->name = name;
	}

	// copy constructor 
	Shape(const Shape& shape) : name(shape.name) 
	{
		cout << "we are in shape copy constructor\n";
	}

	string getName()
	{
		return name;
	}

private: 
	// disallowing the use of "=" operator
	Shape& operator=(const Shape&);

protected:
	string	name;
};

