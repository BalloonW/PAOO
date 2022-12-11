#include <iostream>
using namespace std;
#include <memory>

class Square {
    int length;

public:
    Square(int length)
    {
        this->length = length;
    }

    int area()
    {
        return this->length * this->length;
    }
};
