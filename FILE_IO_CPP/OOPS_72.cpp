#include <iostream>
using namespace std;

class Functor
{
public:
    void operator()()//overload the operator inside the class
    {
        cout << "Functor Called" << endl;
    }
};

int main()
{
    Functor obj;
    obj();      // Calls operator()

    return 0;
}
// Functor (Function Object) in C++
//
// Definition:
// A Functor is an object of a class that can be used like a function.
// It is created by overloading the function call operator().
//
// Requirements:
// 1. Create a class.
// 2. Overload operator() inside the class.
// 3. Create an object of the class.
// 4. Call the object like a function.
//
// Advantages:
// 1. Can store data (state) inside the object.
// 2. More flexible than normal functions.
// 3. Commonly used with STL algorithms.
//
// Syntax:
//
// class Functor
// {
// public:
//     return_type operator()(arguments)
//     {
//         // code
//     }
// };
//
// Functor obj;
// obj(arguments);   // Function call}
