//Polimorphism
//fucntion overloading and constructor overloading is the example of the polimorphism
//operator overloading 
//vertual function 
#include<iostream>

using namespace std;
int main(void)
{
   


}
/*polimorphism has two type 1.compile time poimorphism  2.runtime polymorphism
                                  |                           |
                      1. Function overloading            virtual function 	       
	              2. Operator overloading	          Late binding 
                      Early time binding      
*/
/*
    POLYMORPHISM IN C++

    ---------------------------------------------------------
    What is Polymorphism ?
    ---------------------------------------------------------

    Poly  = Many
    Morph = Forms

    Polymorphism means:
        "One thing behaving in many forms"

    In C++,
    the same function or operator can perform
    different tasks depending on the situation.

    ---------------------------------------------------------
    Types of Polymorphism
    ---------------------------------------------------------

    1. Compile Time Polymorphism
       (Static / Early Binding)

    2. Run Time Polymorphism
       (Dynamic / Late Binding)

    ---------------------------------------------------------
    1. Compile Time Polymorphism
    ---------------------------------------------------------

    Achieved using:
        a) Function Overloading
        b) Operator Overloading

    Compiler decides function at compile time.

    ---------------------------------------------------------
    a) Function Overloading
    ---------------------------------------------------------

    Same function name
    but different parameters.

    Example:

    class Math
    {
    public:

        int add(int a, int b)
        {
            return a + b;
        }

        int add(int a, int b, int c)
        {
            return a + b + c;
        }
    };

    Here:
        add() behaves differently
        depending on arguments.

    ---------------------------------------------------------
    b) Operator Overloading
    ---------------------------------------------------------

    Same operator performs different tasks.

    Example:

        + operator

        5 + 2        -> Addition
        "A" + "B"    -> String Concatenation

    User-defined example:

    class Complex
    {
        int real, imag;

    public:

        Complex(int r, int i)
        {
            real = r;
            imag = i;
        }

        Complex operator + (Complex obj)
        {
            return Complex(real + obj.real,
                           imag + obj.imag);
        }
    };

    ---------------------------------------------------------
    2. Run Time Polymorphism
    ---------------------------------------------------------

    Achieved using:
        Function Overriding + Virtual Function

    Function call is decided at run time.

    ---------------------------------------------------------
    Function Overriding
    ---------------------------------------------------------

    Derived class redefines base class function.

    Example:

    class Animal
    {
    public:

        virtual void sound()
        {
            cout << "Animal sound";
        }
    };

    class Dog : public Animal
    {
    public:

        void sound()
        {
            cout << "Dog barks";
        }
    };

    ---------------------------------------------------------
    Virtual Function
    ---------------------------------------------------------

    A virtual function allows
    runtime polymorphism.

    Declared using:
        virtual keyword

    Example:

    Animal *ptr;
    Dog d;

    ptr = &d;

    ptr->sound();

    Output:
        Dog barks

    ---------------------------------------------------------
    Without virtual function
    ---------------------------------------------------------

    Base class function will execute.

    Output:
        Animal sound

    ---------------------------------------------------------
    With virtual function
    ---------------------------------------------------------

    Derived class function executes.

    Output:
        Dog barks

    ---------------------------------------------------------
    Compile Time vs Run Time Polymorphism
    ---------------------------------------------------------

    ---------------------------------------------------------
    Compile Time          | Run Time
    ---------------------------------------------------------
    Early Binding         | Late Binding
    Fast execution        | Slightly slower
    Decided by compiler   | Decided during execution
    Overloading           | Overriding
    No virtual needed     | Virtual required
    ---------------------------------------------------------

    ---------------------------------------------------------
    Real Life Example
    ---------------------------------------------------------

    Function:
        draw()

    Different behavior:
        Circle    -> draw circle
        Rectangle -> draw rectangle
        Triangle  -> draw triangle

    Same function name,
    different implementation.

    ---------------------------------------------------------
    Advantages of Polymorphism
    ---------------------------------------------------------

    1. Code Reusability
    2. Flexibility
    3. Easy Maintenance
    4. Better Extensibility
    5. Cleaner Code

    ---------------------------------------------------------
    Complete Example
    ---------------------------------------------------------

    #include <iostream>
    using namespace std;

    class Shape
    {
    public:

        virtual void draw()
        {
            cout << "Drawing Shape\n";
        }
    };

    class Circle : public Shape
    {
    public:

        void draw()
        {
            cout << "Drawing Circle\n";
        }
    };

    class Rectangle : public Shape
    {
    public:

        void draw()
        {
            cout << "Drawing Rectangle\n";
        }
    };

    int main()
    {
        Shape *ptr;

        Circle c;
        Rectangle r;

        ptr = &c;
        ptr->draw();

        ptr = &r;
        ptr->draw();

        return 0;
    }

    Output:
        Drawing Circle
        Drawing Rectangle

    ---------------------------------------------------------
    Important Notes
    ---------------------------------------------------------

    1. Overloading
       -> Same function name,
          different parameters

    2. Overriding
       -> Same function in base and derived class

    3. Virtual function
       -> Enables runtime polymorphism

    4. Base class pointer
       -> Can point to derived class object

    ---------------------------------------------------------
    Memory Concept
    ---------------------------------------------------------

        Shape *ptr;

             |
             |
             v

        Circle Object

    Virtual mechanism decides:
        which function to call.

*/
