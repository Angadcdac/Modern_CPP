/*
C Structure:
- Used to group data.
- Requires 'struct' keyword while creating variables.
- Does not support OOP features.

C++ Structure:
- Can contain both data and member functions.
- Supports constructors, inheritance, and other OOP features.
- Members are public by default.
- Variable can be created without using the 'struct' keyword.
*/
/*
#include <iostream>
using namespace std;

struct Student
{
    int id;

    Student()
    {
        id = 101;
    }
};

int main()
{
    Student s1;

    cout << s1.id << endl;

    return 0;
}*/
#include <iostream>
using namespace std;

struct Employee
{
    int id;

    void display()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee e;
    e.id = 1001;
    e.display();
}
