//Basic twoo differnce of struct and class in cpp  has given below
#include <iostream>
using namespace std;
//this is the exactly like class 
struct Student
{
    int id;
    Student(int x)      // Constructor
    {
        id = x;
    }

    void display()      // Member function
    {
        cout << id << endl;
    }
};
int main()
{
    Student s(101);
    s.display();
}

/*
1. Default Access Specifier
   struct -> public
   class  -> private

2. Default Inheritance
   struct -> public inheritance
   class  -> private inheritance
*/
/*
- Data members
- Member functions
- Constructors
- Destructors
- Inheritance
- Virtual functions
- Polymorphism
- Operator overloading
- Static members
- Templates
- Friend functions/classes
*/
