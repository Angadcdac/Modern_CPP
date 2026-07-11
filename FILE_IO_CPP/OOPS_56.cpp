#include <iostream>
using namespace std;
// Template declaration
// T is a generic data type (placeholder)
// The compiler replaces T with the actual data type
// when the template is instantiated.
template <class T>
class Vector
{
private:
    T arr[5];

public:
    void input()
    {
        cout << "Enter 5 elements: ";
        for(int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Vector Elements: ";
        for(int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
// Vector is a dynamic array container provided by the C++ Standard Template Library (STL).
// int specifies that this vector will store integer values only.
// v1 is the name of the vector object.
// Initially, the vector is empty (size = 0).
// Memory is allocated dynamically as elements are added.
// Elements can be inserted using push_back() and accessed using indexing.
    Vector<int> v1;//int type

    v1.input();
    v1.display();
    
    Vector<float> v2;//float type 
    v2.input();
    v2.display();
    return 0;
}
