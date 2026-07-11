//This pointer in cpp
#include <iostream>
using namespace std;

class A{
	 int a;
	 public:
	 A& setData(int a)
	 {
		 //this pointer is pointed to the current object which one is calling the member function
		 this->a = a;
		 return *this;//returnig the current object 

	 }
	 void getData(void)
	 { 
	     cout<<"the value of a is == "<<a<<endl;
	 }
};
int main (void)
{
	A a;
	a.setData(3).getData();//it will give the garbage error
}
/*
    "this" keyword in C++

    ---------------------------------------------------------
    What is "this" ?
    ---------------------------------------------------------

    "this" is a special pointer available inside every
    non-static member function of a class.

    It points to the current object that is calling
    the member function.

    Type of "this":
        ClassName *const this

    Example:
        If object "obj" calls a function,
        then "this" stores the address of obj.

    ---------------------------------------------------------
    Basic Syntax
    ---------------------------------------------------------

        this->variable;
        this->function();

    ---------------------------------------------------------
    Why do we use "this" ?
    ---------------------------------------------------------

    1. To access current object members
    2. To resolve name conflict
    3. To return current object
    4. To pass current object as argument
    5. To check self-assignment
    6. Used in method chaining

    ---------------------------------------------------------
    1. Access current object members
    ---------------------------------------------------------

    class Student
    {
        int age;

    public:

        void setAge(int a)
        {
            this->age = a;
        }
    };

    Here:
        this->age
            means current object's age variable.

    ---------------------------------------------------------
    2. Resolve name conflict
    ---------------------------------------------------------

    When local variable and class variable have same name.

    Example:

    class Employee
    {
        int id;

    public:

        void setId(int id)
        {
            // local variable id = parameter
            // class variable id = this->id

            this->id = id;
        }
    };

    Without "this":
        id = id;
    becomes confusing.

    ---------------------------------------------------------
    3. Return current object
    ---------------------------------------------------------

    Used for method chaining.

    Example:

    class Test
    {
        int x;

    public:

        Test* setX(int x)
        {
            this->x = x;
            return this;
        }
    };

    Here:
        return this;
    returns address of current object.

    ---------------------------------------------------------
    4. Pass current object as argument
    ---------------------------------------------------------

    Example:

    class Demo
    {
    public:

        void display(Demo *ptr)
        {
        }

        void show()
        {
            display(this);
        }
    };

    Here:
        this
    passes current object's address.

    ---------------------------------------------------------
    5. Self-assignment check
    ---------------------------------------------------------

    Commonly used in assignment operator overloading.

    Example:

    class Sample
    {
        int data;

    public:

        Sample& operator=(const Sample &obj)
        {
            if(this == &obj)
            {
                return *this;
            }

            data = obj.data;

            return *this;
        }
    };

    Here:
        this == &obj
    checks whether both objects are same.

    ---------------------------------------------------------
    6. Method Chaining
    ---------------------------------------------------------

    Returning *this allows multiple function calls.

    Example:

    class Calculator
    {
        int value;

    public:

        Calculator& add(int x)
        {
            value += x;
            return *this;
        }

        Calculator& sub(int x)
        {
            value -= x;
            return *this;
        }
    };

    Usage:

        obj.add(10).sub(5);

    ---------------------------------------------------------
    "this" is not available in:
    ---------------------------------------------------------

    1. Static member functions

        Because static functions belong to class,
        not to individual objects.

    2. Outside the class member function

    ---------------------------------------------------------
    Difference between "this" and object name
    ---------------------------------------------------------

    Object name:
        Used outside class

    this:
        Used inside member functions

    Example:

        obj.show();      // outside

        this->data;      // inside

    ---------------------------------------------------------
    Important Notes
    ---------------------------------------------------------

    1. "this" is a pointer
    2. It stores current object's address
    3. Use -> operator with "this"
    4. *this means current object itself
    5. Automatically passed to member functions

    ---------------------------------------------------------
    Simple Example Program
    ---------------------------------------------------------

    #include <iostream>
    using namespace std;

    class Student
    {
        int roll;

    public:

        void setRoll(int roll)
        {
            this->roll = roll;
        }

        void display()
        {
            cout << "Roll = " << this->roll;
        }
    };

    int main()
    {
        Student s1;

        s1.setRoll(101);
        s1.display();

        return 0;
    }

    Output:
        Roll = 101

    ---------------------------------------------------------
    Memory View
    ---------------------------------------------------------

        Student s1;

        Address of s1 -----> this

    When:
        s1.display();

    Internally:
        display(&s1);

    Compiler automatically passes object address.

*/
