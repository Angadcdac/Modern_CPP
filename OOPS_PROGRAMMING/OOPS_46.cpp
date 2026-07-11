//function overriding in cpp
#include <iostream>
using namespace std;
class Animal
{
    public:
    virtual void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal
{
    public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal *ptr;
    Dog d;
    ptr = &d;
    ptr->sound();   // Calls Dog::sound()
    return 0;
}
/*
1. Animal contains a virtual function sound().

2. Dog inherits from Animal and overrides sound().

3. Base class pointer (Animal *ptr) points to
   a Dog object.

4. Because sound() is virtual, the compiler
   performs Dynamic Binding (Late Binding).

5. At runtime, Dog::sound() is called instead of
   Animal::sound().

This is called Function Overriding and Runtime
Polymorphism.
*/
