//This is the example of the runtime polimorphism
//In this code object is bind is decide runtime
//This is the example of the function overrinding  and use of the virtual but it is not pure virtual
#include<iostream>
using namespace std;
class BaseClass{
	public:
		int var_base = 1;
 		virtual void display(){
		     cout <<"The base class variable is == "<<var_base<<endl;
		}

};

class Derived : public BaseClass{
	public:
	     int var_der = 2;
	     void display(){
		     cout<<"in derived base == "<<var_base<<endl;
		     cout<< "dispaly the derived class variable"<<var_der<<endl;
	     }
};

int main(void)
{
	BaseClass *base_class_pointer;
	BaseClass obj_base;
	Derived obj_derived;
	base_class_pointer = &obj_derived;//base class pointer can point the derived class object
	base_class_pointer->display();//virtual function sure the the derived class member function will be run
        //function binding during the runtime
	return 0;
}
/*
    VIRTUAL FUNCTION IN C++

    ---------------------------------------------------------
    What is a Virtual Function ?
    ---------------------------------------------------------

    A virtual function is a member function
    declared in the base class using the
    "virtual" keyword.

    It allows:
        Runtime Polymorphism

    The function call is decided during
    program execution (run time),
    not during compilation.

    ---------------------------------------------------------
    Syntax
    ---------------------------------------------------------

    class Base
    {
    public:

        virtual void display()
        {
        }
    };

    ---------------------------------------------------------
    Why Virtual Function is Used ?
    ---------------------------------------------------------

    Virtual function is used when:

        A base class pointer points
        to a derived class object.

    It ensures:
        Derived class function executes
        instead of base class function.

    ---------------------------------------------------------
    Without Virtual Function
    ---------------------------------------------------------

    #include <iostream>
    using namespace std;

    class Base
    {
    public:

        void show()
        {
            cout << "Base Class Function\n";
        }
    };

    class Derived : public Base
    {
    public:

        void show()
        {
            cout << "Derived Class Function\n";
        }
    };

    int main()
    {
        Base *ptr;
        Derived d;

        ptr = &d;

        ptr->show();

        return 0;
    }

    Output:
        Base Class Function

    Reason:
        Function call is resolved at compile time.

    ---------------------------------------------------------
    With Virtual Function
    ---------------------------------------------------------

    #include <iostream>
    using namespace std;

    class Base
    {
    public:

        virtual void show()
        {
            cout << "Base Class Function\n";
        }
    };

    class Derived : public Base
    {
    public:

        void show()
        {
            cout << "Derived Class Function\n";
        }
    };

    int main()
    {
        Base *ptr;
        Derived d;

        ptr = &d;

        ptr->show();

        return 0;
    }

    Output:
        Derived Class Function

    Reason:
        Function call is resolved at run time.

    ---------------------------------------------------------
    Important Concepts
    ---------------------------------------------------------

    Base class pointer
            |
            |
            v
      Derived Object

    Virtual function decides:
        Which version of function
        should execute.

    ---------------------------------------------------------
    Runtime Polymorphism
    ---------------------------------------------------------

    Virtual function is the main concept
    behind runtime polymorphism.

    Example:

        Animal *ptr;

        Dog d;
        Cat c;

        ptr = &d;
        ptr->sound();

        ptr = &c;
        ptr->sound();

    Same function:
        sound()

    Different outputs:
        Dog Bark
        Cat Meow

    ---------------------------------------------------------
    Rules of Virtual Function
    ---------------------------------------------------------

    1. Must be member function
    2. Cannot be static
    3. Usually declared in base class
    4. Can be overridden in derived class
    5. Accessed using base class pointer/reference

    ---------------------------------------------------------
    Virtual Destructor
    ---------------------------------------------------------

    Destructor should be virtual
    when using inheritance.

    Example:

    class Base
    {
    public:

        virtual ~Base()
        {
            cout << "Base Destructor\n";
        }
    };

    class Derived : public Base
    {
    public:

        ~Derived()
        {
            cout << "Derived Destructor\n";
        }
    };

    ---------------------------------------------------------
    Pure Virtual Function
    ---------------------------------------------------------

    A virtual function with no definition.

    Syntax:

        virtual void display() = 0;

    Used to create:
        Abstract Class

    Example:

    class Shape
    {
    public:

        virtual void draw() = 0;
    };

    ---------------------------------------------------------
    Abstract Class
    ---------------------------------------------------------

    A class containing at least one
    pure virtual function.

    Cannot create object of abstract class.

    Example:

        Shape s;   // ERROR

    ---------------------------------------------------------
    Complete Example
    ---------------------------------------------------------

    #include <iostream>
    using namespace std;

    class Animal
    {
    public:

        virtual void sound()
        {
            cout << "Animal makes sound\n";
        }
    };

    class Dog : public Animal
    {
    public:

        void sound()
        {
            cout << "Dog barks\n";
        }
    };

    class Cat : public Animal
    {
    public:

        void sound()
        {
            cout << "Cat meows\n";
        }
    };

    int main()
    {
        Animal *ptr;

        Dog d;
        Cat c;

        ptr = &d;
        ptr->sound();

        ptr = &c;
        ptr->sound();

        return 0;
    }

    Output:
        Dog barks
        Cat meows

    ---------------------------------------------------------
    Advantages of Virtual Function
    ---------------------------------------------------------

    1. Achieves runtime polymorphism
    2. Improves flexibility
    3. Makes code reusable
    4. Easier maintenance
    5. Supports dynamic binding

    ---------------------------------------------------------
    Disadvantages
    ---------------------------------------------------------

    1. Slightly slower execution
    2. Extra memory for virtual table (vtable)
    3. More complex internally

    ---------------------------------------------------------
    Internal Working
    ---------------------------------------------------------

    Compiler creates:
        vtable (Virtual Table)

    Each object stores:
        vptr (Virtual Pointer)

    vptr points to vtable.

    vtable stores addresses of:
        Virtual functions

    During runtime:
        Correct function address is selected.

    ---------------------------------------------------------
    Memory View
    ---------------------------------------------------------

        Object
        -------
        vptr -----> vtable
                      |
                      |
               function addresses

    ---------------------------------------------------------
    Key Difference
    ---------------------------------------------------------

    Normal Function:
        Compile Time Binding

    Virtual Function:
        Run Time Binding

*/
