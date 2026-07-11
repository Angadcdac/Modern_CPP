#include<iostream>
using namespace std;
inline int product(int a,int b){
      return a*b;
}
int main(void)
{
        int a,b;
	cout<<"Entter the value of a and b"<<endl;
	cin>>a>>b;
        cout<<"The product of a and b is == "<<product(a,b)<<endl;
        cout<<"The product of a and b is == "<<product(a,b)<<endl;
        cout<<"The product of a and b is == "<<product(a,b)<<endl;
        cout<<"The product of a and b is == "<<product(a,b)<<endl;
        cout<<"The product of a and b is == "<<product(a,b)<<endl;
        cout<<"The product of a and b is == "<<product(a,b)<<endl;
        cout<<"The product of a and b is == "<<product(a,b)<<endl;
        cout<<"The product of a and b is == "<<product(a,b)<<endl;
        cout<<"The product of a and b is == "<<product(a,b)<<endl;
	return 0;
}
/*
===============================================================================
                            INLINE FUNCTION IN C++
===============================================================================

Definition:
-----------
An inline function is a function for which the compiler may replace the
function call with the actual function code, reducing function call overhead.

Syntax:
-------
inline return_type function_name(parameters)
{
    // function body
}

Example:
--------
inline int square(int x)
{
    return x * x;
}

===============================================================================
Requirements / Rules:
===============================================================================

1. The function should be small and simple.
2. The function definition should be visible before its use.
3. Usually defined inside header files.
4. Functions defined inside a class are automatically treated as inline.
5. The compiler may ignore the inline request if the function is large.
6. Recursive functions are generally not good candidates for inlining.
7. Excessive use of inline functions can increase executable size.
8. Do not use with the static variable
===============================================================================
Advantages:
===============================================================================

1. Eliminates function call overhead.
   - No stack push/pop operations.
   - No return address handling.

2. Faster execution for small frequently called functions.

3. Type-safe compared to macros.

4. Easier to debug than macros.

5. Improves code readability while maintaining performance.

6. Can be defined in header files without causing multiple-definition errors.

===============================================================================
Limitations / Disadvantages:
===============================================================================

1. Increased code size (Code Bloat).
   - Function body is copied at every call location.

2. Large inline functions may reduce performance due to cache misses.

3. Compiler may ignore the inline keyword.

4. Not suitable for complex functions containing:
   - Large loops
   - Switch statements
   - Heavy calculations

5. Recursive functions are usually not inlined.

6. Excessive use can increase memory consumption.

===============================================================================
Inline Function vs Macro:
===============================================================================

Macro:
-------
#define SQUARE(x) ((x)*(x))

Advantages:
- No function call overhead.

Disadvantages:
- No type checking.
- Difficult to debug.
- Can cause unexpected results.

Inline Function:
----------------
inline int square(int x)
{
    return x * x;
}

Advantages:
- Type safe.
- Compiler checked.
- Easy to debug.
- Better readability.

===============================================================================
When to Use:
===============================================================================

✔ Getter functions
✔ Setter functions
✔ Mathematical utilities
✔ Small helper functions
✔ Frequently called functions

Examples:
----------
inline int getValue()
{
    return value;
}

inline int max(int a, int b)
{
    return (a > b) ? a : b;
}

===============================================================================
When NOT to Use:
===============================================================================

✘ Very large functions
✘ Recursive functions
✘ Functions with complex loops
✘ Functions rarely called

===============================================================================
*/
