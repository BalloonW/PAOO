#include "shape.h"
#include "square.h"

using namespace std;

int main()
{
	Square square1("nr1", 4.f);

	// copy square objects using copy constructor
	Square square3 = square1;
	cout << square3.getName() << endl;
	cout << square3.getSideLength() << endl;

	return 0;
}
