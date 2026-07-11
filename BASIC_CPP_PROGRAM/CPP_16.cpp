//the difference of struct and class in cpp
#include <iostream>
using namespace std;

struct Student
{
    int id;    // public by default
};

int main()
{
    Student s;

    s.id = 101;    // Allowed
    cout << s.id << endl;

    return 0;
}
/*
#include <iostream>
using namespace std;

class Student
{
    int id;    // private by default
};

int main()
{
    Student s;

    s.id = 101;    // ERROR
                  // 'id' is private

    return 0;
}*/
