#include <iostream>
using namespace std;
#include "square.h"

int main()
{
    shared_ptr<Square> P1(new Square(10));
    cout << P1->area() << endl;

    shared_ptr<Square> P2;
    P2 = P1;

    cout << P2->area() << endl;

    cout << P1->area() << endl;

    // When this reference counter will become 0, then pointer P1 will be deleted
    cout << P1.use_count() << endl;
    return 0;
}