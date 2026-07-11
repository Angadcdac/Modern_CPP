//endl is manupulator
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34; 
    // cout<<"The value of a was: "<<a;
    // a = 45; 
    // cout<<"The value of a is: "<<a;
    // Constants in C++
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    // Manipulators in C++
     int a =3, b=78, c=1289;
     cout<<"The value of a without setw is: "<<a<<endl;
     cout<<"The value of b without setw is: "<<b<<endl;
     cout<<"The value of c without setw is: "<<c<<endl;
     
     //it is the right justfied as %3d;  it allow upto 4 number 
     cout<<"The value of a is: "<<setw(4)<<a<<endl;
     cout<<"The value of b is: "<<setw(4)<<b<<endl;
     cout<<"The value of c is: "<<setw(4)<<c<<endl;


    // Operator Precedence
   // int a =3, b=4;
    // int c = (a*5)+b;
   // int c = ((((a*5)+b)-45)+87);
   // cout<<c;
    return 0;
}
/*
// endl is a manipulator in C++.
// It is used with cout to:
// 1. Insert a newline character ('\n').
// 2. Flush the output buffer immediately.

// Example:
cout << "Hello" << endl;
cout << "World" << endl;

// Output:
// Hello
// World

// Equivalent to:
cout << "Hello\n";
cout << "World\n";

// Difference:
// '\n' only moves to the next line.
// endl moves to the next line AND flushes the output buffer.

// Syntax:
cout << endl;
*/
/*
setw() = Set Width

Header File:
#include <iomanip>

Purpose:
setw() sets the minimum width of the next output field.
If the data is smaller than the specified width,
spaces are added by default.

Syntax:
cout << setw(width) << data;

Note:
- setw() affects only the next output item.
- It is commonly used for formatting tables.
*/
