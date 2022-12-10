#include <iostream>
#include <string> 

using namespace std;

class Square : Shape
{
public:
	// making sure that object is initialized before it will be used
	// called also the constructor from base class so what all the members will be initialized
	Square(const std::string name, const float side_lenght) : Shape(name)
	{
		this->side_lenght = side_lenght;
	}
	
	Square(const Square& square) :Shape(square), side_lenght(square.side_lenght) 
	{
		cout << "we are in square copy constructor\n";
	}

	float getSideLength()
	{
		return side_lenght;
	}

	string getName()
	{
		return name;
	}

private:
	// dissalowed the use of assingment operator
	Square& operator=(const Square& square);

private:
	float side_lenght;
};