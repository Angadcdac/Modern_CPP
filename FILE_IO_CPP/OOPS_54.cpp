//Template in C++

A template allows you to write generic code that works with different data types without rewriting the same function or class multiple times.

Why Use Templates?

Without templates:

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

The same logic is repeated for different data types.

Using a template:

template <class T>
T add(T a, T b)
{
    return a + b;
}

Now the same function works for int, float, double, etc.

1. Function Template
#include <iostream>
using namespace std;

// Function Template
template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << maximum(10, 20) << endl;
    cout << maximum(10.5, 20.5) << endl;
    cout << maximum('A', 'Z') << endl;

    return 0;
}
Output
20
20.5
Z
2. Template with Multiple Data Types
#include <iostream>
using namespace std;

template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main()
{
    display(10, 20.5);
    display("Angad", 25);

    return 0;
}
3. Class Template
#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num;

public:
    Calculator(T n)
    {
        num = n;
    }

    void display()
    {
        cout << "Value = " << num << endl;
    }
};

int main()
{
    Calculator<int> obj1(100);
    Calculator<float> obj2(99.5);

    obj1.display();
    obj2.display();

    return 0;
}
4. Syntax
Function Template
template <class T>
T function_name(T arg)
{
    // code
}

or

template <typename T>
T function_name(T arg)
{
    // code
}

class and typename mean the same thing here.

Class Template
template <class T>
class ClassName
{
    // members
};
Advantages
// 1. Code Reusability
// 2. Generic Programming
// 3. Reduces Code Duplication
// 4. Type Safety
// 5. Easy Maintenance
Limitations
// 1. Compilation Time Increases
// 2. Error Messages Can Be Complex
// 3. Code Size May Increase
// 4. Debugging Can Be Difficult
Common Interview Questions
Q1: Difference between class and typename?
template <class T>
template <typename T>

Both are equivalent in templates.

Q2: What is template specialization?

A specialized version of a template for a specific data type.

template <>
void display<char>(char ch)
{
    cout << "Character: " << ch << endl;
}
Q3: What is the Standard Template Library (STL)?

STL is a collection of template-based containers and algorithms.

Examples:

vector<int>
list<int>
map<int, string>
queue<int>
stack<int>
One-Line Definition for Interviews

"A template is a C++ feature that enables generic programming by allowing functions and classes to work with multiple data types using a single implementation."



