//Visit C++ standard header file on goole and use it as per the requirements
#include <iostream>
using namespace std;
int main()
{
    int age;
    float salary;
    char grade;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "Enter Grade: ";
    cin >> grade;

    cout << "\nAge    = " << age << endl;
    cout << "Salary = " << salary << endl;
    cout << "Grade  = " << grade << endl;

    return 0;
}
/*
=========================================================
CIN AND COUT IN C++
=========================================================

C++ uses streams to perform input and output operations.

1. cout  -> Standard Output Stream
2. cin   -> Standard Input Stream

Both are defined in the <iostream> header file.

=========================================================
COUT (OUTPUT STREAM)
=========================================================

Definition:
cout is an object of the ostream class used to display
data on the screen (console).

Syntax:
    cout << data;

The operator '<<' is called the
Stream Insertion Operator.

Reason:
It inserts data into the output stream and sends it
to the console.

Example:
    cout << "Hello";
    cout << 100;

=========================================================
CIN (INPUT STREAM)
=========================================================

Definition:
cin is an object of the istream class used to receive
input from the keyboard.

Syntax:
    cin >> variable;

The operator '>>' is called the
Stream Extraction Operator.

Reason:
It extracts data from the input stream and stores it
into a variable.

Example:
    cin >> age;
    cin >> salary;

=========================================================
*/
