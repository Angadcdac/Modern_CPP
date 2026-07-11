//Diffrence betweeen the c structure and cpp structure with the example
/*
======================== C STRUCT vs C++ STRUCT ========================

C Structure:
------------
1. Used to group related data members together.
2. Contains only data members (variables).
3. Does not support Object-Oriented Programming (OOP) features.
4. Cannot have member functions.
5. Cannot have constructors or destructors.
6. Cannot support inheritance or polymorphism.
7. While creating a variable, the 'struct' keyword is required.

Example (C):

struct Student
{
    int rollNo;
    char name[20];
};

struct Student s1;

=======================================================================

C++ Structure:
--------------
1. Used to group related data and functions together.
2. Can contain both data members and member functions.
3. Supports Object-Oriented Programming (OOP) features.
4. Can have constructors and destructors.
5. Can support inheritance and polymorphism.
6. Members are PUBLIC by default.
7. While creating an object, the 'struct' keyword is optional.

Example (C++):

struct Student
{
    int rollNo;

    // Constructor
    Student()
    {
        rollNo = 0;
    }

    // Member Function
    void display()
    {
        cout << "Roll No = " << rollNo << endl;
    }
};

int main()
{
    Student s1;      // No need to write 'struct'

    s1.rollNo = 101;
    s1.display();

    return 0;
}

Output:
Roll No = 101
/*
1. C:
   struct Student s1;

   C++:
   Student s1;

2. C structures contain only data members.

3. C++ structures can contain:
   - Data members
   - Member functions
   - Constructors
   - Destructors
   - Operator overloading
   - Inheritance

4. Default Access Specifier:
   struct in C++ -> public
   class  in C++ -> private

5. C struct does not support OOP features.
   C++ struct supports OOP features.
*/
