//Abastract class and vitual function
//Abstact class is those class which one having pure vitual fuction
/********************************************************
INTERVIEW DEFINITIONS
********************************************************

Q. What is a Pure Virtual Function?

Ans:
A Pure Virtual Function is a virtual function declared
with '= 0' in the base class. It does not provide an
implementation and forces derived classes to override it.

---------------------------------------------------------

Q. What is an Abstract Class?

Ans:
An Abstract Class is a class that contains at least one
pure virtual function. Objects of an abstract class
cannot be created, and it is mainly used as a base class
for inheritance and polymorphism.

********************************************************/
#include <iostream>
#include <cstring>
using namespace std;
//This is the abstract class you can not create the object of this class this is indication that user 
//is allowed only for derived class and access the abstract class memeber that is having the pure virtual 
//function .If the function is not pure virtual function then it will not give the error because on that 
//condition that will be not abstract class //
// abstrat class must have pure virtual function
class CWH{
	protected:
		string title;
		float rating;
	public:CWH(string s, float r)
	       {
	            title = s;
		    rating = r;
	       }
	       virtual void display(void) = 0;//do nothing function this is the pure virtual function
					      //the definition is given in the derived class
					      //otherwise it will give the error

};

class CWHVideo : public CWH	
{
	int video_length;
	public:
	CWHVideo(string s,float r,float vl):CWH(s, r)
	{
	   video_length  = vl;
	}
	void display(){
		cout<<"CWHVideo Amazing video with title "<<title<<endl;
		cout<<"CWHVideo Rating : "<<rating<<" out of 5 stars "<<endl;
		cout<<"CWH Video Length of video is == "<<video_length<<" minuts "<<endl;
	}
	
};

class CWHText :public CWH
{
	int words;
	public:
	       CWHText(string s, float r,int wc) : CWH(s, r){
	       words = wc;
	}//if the display function is commented then it will prefer the class member function and print 
	 //the display//it will not give the error
	void display(){
		cout<<"CWHText text tutorial with title : "<<title<<endl;	
		cout<<"CWHText Rating of this text tutorial : "<<rating<<" out of 5 stars "<<endl;
		cout<<"CWHText No of words in this text tutorial is : "<<words<<endl;
	}	
};
int main(void)
{
	  string  title = new char [30];
	  float rating,vlen;
	  int words;

          //important
         // CWH v;//User is not allowed to create the object of the abstract base class

	  title = "Django tutorial";
	  vlen = 4.56;
	  rating = 4.89;
	  CWHVideo djVideo(title, rating, vlen);
	 // djVideo.display();
	 
	 
	  title = "Django tutorial";
	  words = 456;
	  rating = 4.89;
	  CWHText djText(title, rating, words);
	  djText.display();

	  CWH* tuts[2];
	  tuts[0] = &djVideo;
	  tuts[1] = &djText;	
	
	  tuts[0] -> display();
	  //virtual function sure the same inherited fucntion will be called by the pointer
	  //if remove the virtual function then it wil give the base messiages
	  tuts[1] -> display();
	  return 0;
}
//Rules for the virtual function
//it must not static
//They are accessed by the object pointer
//Virtual fuction can be friend of another class
//If a vitual function defined in the base class then do not need to define in the derived class
/*
=========================================================
PURE VIRTUAL FUNCTION
=========================================================

Definition:
A pure virtual function is a virtual function that is
declared in the base class but does not provide any
implementation. It is assigned with '= 0'.

Syntax:
    virtual return_type function_name(arguments) = 0;

Example:
    virtual void display() = 0;

Why it is used?
- To enforce a common interface among derived classes.
- To achieve runtime polymorphism.
- To ensure that every derived class provides its own
  implementation of the function.
- To define "what to do" but not "how to do it".

Key Points:
1. Declared using '= 0'.
2. Has no mandatory implementation in base class.
3. Derived classes must override it.
4. Cannot be called directly through an object of
   the abstract class.
5. Makes the class an Abstract Class.

Real-Life Example:
Vehicle is a generic concept.
Every vehicle moves differently.

    Vehicle
       |
   ----------------
   |              |
  Car           Bike

The move() function can be declared as pure virtual
because each vehicle has its own way of moving.
*/
/********************************************************
ABSTRACT CLASS
********************************************************

Definition:
An Abstract Class is a class that contains at least
one Pure Virtual Function.

Purpose:
- Acts as a blueprint for derived classes.
- Provides common functionality and interface.
- Prevents creation of incomplete objects.

Syntax:

class Base
{
public:
    virtual void display() = 0;
};

Characteristics:
1. Cannot create objects directly.
2. Can contain:
   - Data members
   - Member functions
   - Constructors
   - Destructors
   - Pure virtual functions
3. Used as a base class.
4. Supports runtime polymorphism.
5. Derived class must implement all pure virtual
   functions to become a concrete class.

Example:

class Shape
{
public:
    virtual void draw() = 0;
};

Shape s;   // Error

Reason:
Shape is abstract because it contains a pure
virtual function.
*/
/*
=========================================================
DIFFERENCE BETWEEN VIRTUAL FUNCTION AND PURE VIRTUAL FUNCTION
=========================================================

Virtual Function

- Has implementation in base class.
- Overriding is optional.
- Base class object can be created.

Example:
    virtual void show()
    {
        cout << "Base Show";
    }

---------------------------------------------------------

Pure Virtual Function

- No implementation required in base class.
- Overriding is mandatory.
- Base class becomes abstract.
- Object cannot be created.

Example:
    virtual void show() = 0;

=========================================================
*/
/*
=========================================================
ABSTRACT CLASS FLOW
=========================================================

            Abstract Class
                 Base
                   |
        ---------------------
        |                   |
     Derived1           Derived2
        |                   |
   display()          display()

Base Class:
- Defines common rules.

Derived Classes:
- Provide actual implementation.

=========================================================
*/
/********************************************************
INTERVIEW DEFINITIONS
********************************************************

Q. What is a Pure Virtual Function?

Ans:
A Pure Virtual Function is a virtual function declared
with '= 0' in the base class. It does not provide an
implementation and forces derived classes to override it.

---------------------------------------------------------

Q. What is an Abstract Class?

Ans:
An Abstract Class is a class that contains at least one
pure virtual function. Objects of an abstract class
cannot be created, and it is mainly used as a base class
for inheritance and polymorphism.

********************************************************/ 
