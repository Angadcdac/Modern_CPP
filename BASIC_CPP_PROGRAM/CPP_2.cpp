//namespace uses in the class while accessing the member function
//Comment type is same as the c language // and /* */
#include <iostream>
using namespace std;
// First namespace
namespace A
{
    void show()
    {
        cout << "Namespace A" << endl;
    }
}

//Second namespace
namespace B
{
    void show()
    {
        cout << "Namespace B" << endl;
    }
}

int main()
{
    A::show();   // Calls show() from namespace A
    B::show();   // Calls show() from namespace B
    return 0;
}
/*
=========================================================
NAMESPACE IN C++
=========================================================

Definition:
A namespace is a declarative region that provides a
scope for identifiers such as variables, functions,
classes, and objects.

It is used to organize code and prevent name conflicts
when different libraries or programs contain identifiers
with the same name.

Think of a namespace as a container that groups related
code together.

Why is Namespace Needed?
---------------------------------------------------------
Suppose two programmers create a function with the same
name:

    void display();

If both functions exist in the same program, the compiler
cannot determine which one to use.

Namespace solves this problem by placing each function
inside a different scope.

Benefits:
---------------------------------------------------------
1. Avoids naming conflicts.
2. Organizes large projects.
3. Allows multiple libraries to coexist.
4. Improves code readability and maintainability.

Syntax:
---------------------------------------------------------
namespace NamespaceName
{
    // variables
    // functions
    // classes
}
=========================================================
*/
//Example 1: Creating a Namespace
/* #include <iostream>
using namespace std;


 //Creating a namespace named MySpace
namespace MySpace
{
    int num = 10;

    void display()
    {
        cout << "Inside MySpace Namespace" << endl;
    }
}

int main()
{
    
    Accessing namespace members using
    Scope Resolution Operator (::)
     
    cout << MySpace::num << endl;

    MySpace::display();

    return 0;
}*/
