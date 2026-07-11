//Introduction to STL
 // STL (Standard Template Library) in C++
//
// Definition:
// STL is a collection of pre-defined classes and functions that provide
// commonly used data structures and algorithms.
//
// Why do we use STL?
// 1. Reduces coding effort.
// 2. Provides efficient and tested data structures.
// 3. Increases code reusability.
// 4. Improves program performance.
// 5. Makes code easier to maintain.
//
// Main Components of STL:
// 1. Containers   -> Store data (vector, list, deque, map, set, etc.)
// 2. Algorithms   -> Perform operations (sort, find, reverse, count, etc.)
// 3. Iterators    -> Used to access container elements.
//
// Requirement:
// #include <vector>      // For vector
// #include <algorithm>   // For sort()
// #include <iostream>    // For cout
//
// Example: Using vector and sort()
//
// STL component 
// 1. Containers  - Store data (vector, list, map, set, etc.) 
// 2.algorigthm  -- sorting,serching,merginig,coping,find ,reverse use the template functions
// 3.Iterations ---Used to access the traverse the container elements //perform the iteraion
//It is having all the built in function for performing the specific test 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Vector container to store integers
    vector<int> v = {50, 10, 40, 20, 30};

    // Sort the vector elements in ascending order
    sort(v.begin(), v.end());

    cout << "Sorted Elements: ";

    // Display all elements using range-based for loop
    for(int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
// STL (Standard Template Library)
// A library in C++ that provides ready-made data structures,
// algorithms, and iterators for efficient programming.
//
// Example Containers: vector, list, map, set
// Example Algorithms: sort(), find(), reverse()
// Benefit: Reduces development time and improves code efficiency.
// You can easly use STL in your code 

// // Types of STL Containers
//
// 1. Sequence Containers
//    - Store data in a linear sequence.
//    Examples:
//    a) vector
//    b) list
//    c) deque
//    d) array
//    e) forward_list
//
// 2. Associative Containers
//    - Store data in sorted order.
//    Examples:
//    a) set
//    b) multiset
//    c) map
//    d) multimap
//
// 3. Unordered Associative Containers
//    - Store data using hashing.
//    Examples:
//    a) unordered_set
//    b) unordered_multiset
//    c) unordered_map
//    d) unordered_multimap
//
// 4. Container Adaptors(This is also called the derived container)
//    - Modified versions of existing containers.
//    Examples:
//    a) stack
//    b) queue
//    c) priority_queue

