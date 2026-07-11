#include <iostream>

int main()//Every C++ program must have a special function named main (all lower case letters).
{
    std::cout << "This is the second program\n";
    return 0;
}
/*
    std::cout Detailed Explanation
    --------------------------------

    std::cout is an object used for output in C++.

    Full form:
        cout = character output

    It is defined inside:
        std namespace

    Syntax:
        std::cout << data;

    ------------------------------------------------

    Breakdown:

    1. std
       ----
       std means "standard namespace".

       The C++ standard library keeps many things
       inside std namespace to avoid name conflicts.

       Examples:
           std::cout
           std::cin
           std::string
           std::vector

    ------------------------------------------------

    2. ::
       ---
       This is called the "scope resolution operator".

       It is used to access members inside a namespace
       or class.

       Example:
           std::cout

       Means:
           use cout from std namespace

    ------------------------------------------------

    3. cout
       -----
       cout is an output stream object.

       It sends data to the terminal/screen.

       cout belongs to ostream class.

       It is available after including:

           #include <iostream>

    ------------------------------------------------

    4. <<
       ---
       This is called the stream insertion operator.

       It inserts data into the output stream.

       Example:

           std::cout << "Hello";

       Meaning:
           send "Hello" to screen output

    ------------------------------------------------

    5. Multiple Outputs
       ----------------

       Example:

           std::cout << "Age = " << 22;

       Output:
           Age = 22

       Here multiple data items are sent
       continuously to cout.



    7. Without std::
       --------------

       If we write:

           using namespace std;

       then we can use:

           cout << "Hello";

       instead of:

           std::cout << "Hello";


    10. Stream
        ------

        cout is called an output stream because
        data flows from program to screen.

        Program  ----->  cout  ----->  Terminal

*/
