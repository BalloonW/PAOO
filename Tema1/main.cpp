#include "shape.h"
#include "square.h"

using namespace std;

int main()
{
	Square* square1 = new Square("nr1", 4.f);
	Square* square2 = new Square("nr2", 5.f);

	square1->calculate_perimeter();
	square2->calculate_perimeter();

	cout << square1->get_perimeter() << endl;
	cout << square2->get_perimeter() << endl;

	// copy square objects using assignment operator
	square1 = square2;
	cout << square1->get_perimeter() << endl; // prints 20

	// copy square objects using copy constructor
	Square* square3 = square1;
	square3->calculate_perimeter();
	cout << square3->get_perimeter() << endl; // prints 20

	return 0;
}
