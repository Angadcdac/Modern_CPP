#include<iostream>
using namespace std;
int main(void)
{
/*
   case 1:
   class B : pubic A{
       //Order of constructor execution ==  first class A then class B
   }
   
   case 2:pubic B ,public C{
        //Order of execution of the constructor class B,class C then class A
   }

   case 2:pubic B ,vitual public C{
        //Order of execution of the constructor class C,class B then class A
   }
*/


}

/*
2. Derived class constructor executes after base class.

3. If base class has parameterized constructor,
   derived class must call it using initializer list.

4. Destructor order is opposite:
   Derived Destructor -> Base Destructor
*/
