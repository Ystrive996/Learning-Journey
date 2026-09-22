#include <iostream>
#include "HugeInteger.h"

using namespace std;

int main()
{
    // instantiate from int
    HugeInteger a(19);
    // instantiate from const char*
    HugeInteger b("2");

    cout << "a (from int): "; a.output(); cout << '\n';
    cout << "b (from const char*): "; b.output(); cout << '\n';

    HugeInteger sum = a.add(b);
    cout << "a + b = "; sum.output(); cout << '\n';

    // ensure b > a for subtraction
    HugeInteger diff = b.subtract(a);
    cout << "b - a = "; diff.output(); cout << '\n';

    cout << "b > a? " << (b.isGreaterThan(a) ? "true" : "false") << '\n';
    cout << "a == a? " << (a.isEqualTo(a) ? "true" : "false") << '\n';



    return 0;
}
