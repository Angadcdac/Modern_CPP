//new use as the dynamic allocaiton of the memory as malloc all diffrence has given below
#include<iostream>
using namespace std;
int main(void)
{
	int a = 4;
	int *ptr;
	ptr = &a;
	cout<<"the value of a is == "<<a<<endl;
	cout<<"The value of *p is == "<<*ptr<<endl;

	//simillarly use the new keyword
	int *b = new int(40);
	cout <<"The value of address b is =="<<*b<<endl;
//	int *p = new float(34.5);//error
	float *p = new float(34.5);//error
	cout <<"The value of address b is =="<<*p<<endl;

        int *arr = new int [3];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
        cout<<"The value of index 0 =="<<arr[0]<<endl;
        cout<<"The value of index 1 =="<<arr[1]<<endl;
        cout<<"The value of index 2 =="<<arr[2]<<endl;
        delete []arr;//delet the dynamic allocated memory

	return 0;

}
/*
========================================
malloc() vs Pointer vs new in C++
========================================

1. Pointer
----------------------------------------
- A pointer is a variable that stores
  the address of another variable.

Example:
    int x = 10;
    int *ptr = &x;

Here:
    x      -> normal variable
    &x     -> address of x
    ptr    -> stores address of x

Important:
- Pointer itself DOES NOT allocate memory.
- It only points to memory.

----------------------------------------

2. malloc()
----------------------------------------
- malloc() is a C library function.
- Used for dynamic memory allocation.
- Allocates raw memory from HEAP.
- Does NOT initialize memory.
- Does NOT call constructor.

Header File:
    #include <cstdlib>

Example:
    int *ptr = (int*) malloc(sizeof(int));

Free memory:
    free(ptr);

Features:
- Returns void*
- Type casting required in C++
- Returns NULL on failure

----------------------------------------

3. new
----------------------------------------
- new is a C++ operator.
- Used for dynamic memory allocation.
- Allocates memory from HEAP.
- Can initialize memory.
- Automatically calls constructor.

Example:
    int *ptr = new int(10);

Delete memory:
    delete ptr;

Features:
- No type casting required
- Returns correct pointer type
- Throws exception on failure

----------------------------------------

Difference Table
----------------------------------------

Pointer:
- Stores address only
- Does not allocate memory

malloc():
- Allocates raw memory
- C style allocation
- No constructor call

new:
- Allocates memory
- C++ style allocation
- Calls constructor

----------------------------------------

Memory Area
----------------------------------------

Stack Memory:
    int x = 10;

Heap Memory:
    int *ptr = new int;
    int *ptr = (int*) malloc(sizeof(int));

----------------------------------------

Important Rules
----------------------------------------

malloc()  -> free()

new       -> delete

new[]     -> delete[]

Do NOT mix them.

Wrong:
    int *p = new int;
    free(p);

Wrong:
    int *p = (int*) malloc(sizeof(int));
    delete p;

----------------------------------------

Modern C++ Recommendation
----------------------------------------

Instead of raw new/delete prefer:
    std::vector
    std::unique_ptr
    std::shared_ptr

Because they avoid:
- memory leaks
- dangling pointers
- manual memory management issues

========================================
*/
