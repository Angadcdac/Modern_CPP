/*
    VECTOR IN C++

    Definition:
    - Vector is a dynamic array provided by the C++ Standard Template Library (STL).
    - It stores elements in contiguous memory locations.
    - Its size can grow or shrink automatically during program execution.
    - Memory management is handled automatically by the vector class.

    Advantages:
    1. Dynamic size (no need to specify size beforehand).
    2. Fast random access using index.
    3. Automatic memory allocation and deallocation.
    4. Provides many built-in functions such as:
       push_back(), pop_back(), size(), clear(), empty(), etc.

    Header File:
    #include <vector>

    Syntax:
    vector<data_type> vector_name;

    Example:
    vector<int> v1;
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Creating a vector of integer type
    vector<int> v1;

    // Adding elements into the vector
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    // Displaying vector elements
    cout << "Vector Elements: ";

    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;

    // Displaying the size of vector
    cout << "Size of vector = " << v1.size() << endl;

    // Removing the last element
    v1.pop_back();

    cout << "After pop_back(): ";

    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;

    return 0;
}
