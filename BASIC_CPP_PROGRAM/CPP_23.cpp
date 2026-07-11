
#include <iostream>
using namespace std;

// Function declaration with default arguments
void display(int a = 10, int b = 20, int c = 30);

void display(int a, int b, int c)
{
    cout << "a = " << a
         << ", b = " << b
         << ", c = " << c << endl;
}

int main()
{
    display();           // Uses all default values
    display(100);        // a = 100, b and c use defaults
    display(100, 200);   // a = 100, b = 200, c uses default
    display(1, 2, 3);    // Uses all supplied values

    return 0;
}

/*
===============================================================================
                    DEFAULT ARGUMENTS IN C++
===============================================================================

Definition:
-----------
Default arguments are values provided to function parameters during function
declaration. If the caller does not pass a value for those parameters, the
default value is used automatically.

Syntax:
-------
return_type function_name(parameter = default_value);

Rules:
------
1. Default arguments are specified in the function declaration/prototype.
2. Default arguments must be assigned from RIGHT to LEFT.
3. Once a parameter has a default value, all parameters to its right
   must also have default values.
4. Default arguments are used only when the caller omits the argument.
5. Function overloading and default arguments can sometimes create ambiguity.

Advantages:
-----------
1. Reduces the need for multiple overloaded functions.
2. Makes function calls simpler.
3. Improves code readability.
4. Reduces code duplication.

Limitations:
------------
1. Can create ambiguity with function overloading.
2. Too many default arguments can make code harder to understand.
3. Default values are fixed at compile time.

===============================================================================
Example:
===============================================================================
*/
