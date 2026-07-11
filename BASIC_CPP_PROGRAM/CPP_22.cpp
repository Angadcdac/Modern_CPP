/*
===============================================================================
                           FUNCTION OVERLOADING IN C++
===============================================================================

Definition:
-----------
Function Overloading is a feature of C++ that allows multiple functions to
have the same name but different parameter lists.

The compiler differentiates the functions based on:
1. Number of parameters
2. Type of parameters
3. Order of parameters

Function overloading is an example of Compile-Time Polymorphism
(Static Polymorphism).

Rules:
------
1. Function names must be the same.
2. Parameter list must be different.
3. Return type alone cannot distinguish overloaded functions.

Advantages:
-----------
1. Improves code readability.
2. Reusability of function names.
3. Easier maintenance.
4. Supports compile-time polymorphism.

===============================================================================
*/

#include <iostream>
using namespace std;

class Calculator
{
public:

    // Function 1 : No Parameter
    void add()
    {
        cout << "No parameters passed" << endl;
    }

    // Function 2 : One Integer Parameter
    void add(int a)
    {
        cout << "One Integer : " << a << endl;
    }

    // Function 3 : Two Integer Parameters
    void add(int a, int b)
    {
        cout << "Sum of Integers = " << a + b << endl;
    }

    // Function 4 : Two Double Parameters
    void add(double a, double b)
    {
        cout << "Sum of Doubles = " << a + b << endl;
    }
};

int main()
{
    Calculator obj;

    obj.add();              // Function 1
    obj.add(10);            // Function 2
    obj.add(10, 20);        // Function 3
    obj.add(10.5, 20.5);    // Function 4

    return 0;
}
