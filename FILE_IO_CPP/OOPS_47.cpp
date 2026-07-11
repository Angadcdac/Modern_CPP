/*
===============================================================================
                           FILE I/O IN C++
===============================================================================

Definition:
-----------
File I/O (Input/Output) is used to store data permanently in files and
retrieve data from files.

Normally, data entered using keyboard is lost when the program ends.
Using files, data can be saved permanently on disk.

I/O = Input + Output

Input  -> Reading data from a file.
Output -> Writing data to a file.

===============================================================================
Header File Required:
===============================================================================

#include <fstream>

fstream = File Stream

===============================================================================
File Stream Classes:
===============================================================================

1. ofstream (Output File Stream)
   --------------------------------
   Used to write data to a file.

2. ifstream (Input File Stream)
   -------------------------------
   Used to read data from a file.

3. fstream (File Stream)
   ------------------------
   Used for both reading and writing.

===============================================================================
File Open Modes:
===============================================================================

ios::in
--------
Open file for reading.

ios::out
---------
Open file for writing.

ios::app
---------
Append data at the end of the file.

ios::ate
---------
Move pointer to end after opening.

ios::trunc
-----------
Delete existing file contents.

ios::binary
------------
Open file in binary mode.

===============================================================================
Writing Data to a File:
===============================================================================
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("data.txt");

    fout << "Hello World" << endl;
    fout << "Welcome to C++ File Handling";

    fout.close();

    return 0;
}
