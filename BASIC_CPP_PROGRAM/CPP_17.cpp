//Diffrnce oon hte
#include <iostream>
using namespace std;

struct Base
{
    int x = 10;
};

struct Derived : Base   // public inheritance by default
{
};

int main()
{
    Derived d;

    cout << d.x << endl;    // Allowed

    return 0;
}
#include <iostream>
using namespace std;

class Base
{
public:
    int x = 10;
};

class Derived : Base    // private inheritance by default
{
};

int main()
{
    Derived d;

    cout << d.x << endl;    // ERROR

    return 0;
}
/*
Default Inheritance in C++:

struct Derived : Base
{
};
// Equivalent to:
struct Derived : public Base
{
};

class Derived : Base
{
};
// Equivalent to:
class Derived : private Base
{
};

Therefore:
- struct uses public inheritance by default.
- class uses private inheritance by default.
*/
