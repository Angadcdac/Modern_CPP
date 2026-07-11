//Vertual base class
/*
A virtual base class is used in C++ to avoid duplicate copies of a base class when using multiple inheritance.*/ 
Virtual Base Class in C++

A virtual base class is used in C++ to avoid duplicate copies of a base class when using multiple inheritance.

It solves the Diamond Problem.

Diamond Problem

Without virtual inheritance:

class A
{
public:
    int x;
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};
Problem

D gets two copies of class A:

      A
     / \
    B   C
     \ /
      D

So this becomes ambiguous:

D obj;
obj.x;   // ERROR

Compiler does not know whether x comes from B's A or C's A.

Solution: Virtual Base Class

Use virtual while inheriting.
//=============================================================================
class A
{
public:
    int x;
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

Now only one copy of class A is shared.

        A
      /   \
     B     C
      \   /
        D
	
