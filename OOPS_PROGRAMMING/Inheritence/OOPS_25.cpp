//Protected member can be inherited from the derived class but it can not acess by creatig the object 
//Actully privatae member can not inherited from the derived class that why we need protected because it will be safe from outside 
//changes with the help of the objets
#include <iostream>
using namespace std;
class Base{
	protected: //it can be accessed from the derived class but can not change by the object 
	int a;
	private:
	int b;
};
class Derived:protected Base{



};
using namespace std;
int main(void)
{
	Base b;
	Derived k;
        //cout<<b.a;   //can not be called because it is the protected member 
        //cout<<k.a;  //it is also the protected member that is why we can not call it
	
	
	return 0;
}
/* For a protected member :
 * Base class                         derived class 
 *                         public derivation     private derivation         protected derivation
 *1.Private members        not inherted          not inherited              Not inherited
 *2.Protected members      protected             private                    Protected
 *3.Pubic memberes         public                private                    Protected
 * */

/* =========================================================
   PROTECTED VARIABLE IN C++
   =========================================================

   Definition:
   A protected variable is a class member that can be
   accessed:
     1. Inside the same class
     2. Inside derived (child) classes

   But it CANNOT be accessed directly outside the class.

   Access Specifier:
        protected

   Flow:
        Base Class
            |
     protected variable
            |
        Derived Class
     (can access it)
*/

/*
#include <iostream>
using namespace std;

class Parent
{
protected:
    int value = 100;   // protected variable
};

class Child : public Parent
{
public:
    void display()
    {
        // Accessible inside derived class
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Child obj;

    obj.display();

    // NOT ALLOWED
    // obj.value = 10;

    return 0;
}
   =========================================================
   OUTPUT
   =========================================================

   Value = 100


   Explanation:
   - 'value' is protected in Parent class
   - Child class can access it
   - Outside the class, direct access is not allowed
*/
