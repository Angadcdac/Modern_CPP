//Reusability support using inhertince
//reuse of the classes
//it make easy we do not need to change in the class 
//Base class inherited
//new class that is inherited is derived class

 
/* =========================================================
   TYPES OF INHERITANCE IN C++
   =========================================================

   1. Single Inheritance
   2. Multiple Inheritance
   3. Hierarchical Inheritance
   4. Multilevel Inheritance
   5. Hybrid Inheritance
*/


/* =========================================================
   1. SINGLE INHERITANCE
   =========================================================

   Definition:
   A derived class inherits from only one base class.

   Flow:
        Class A
           |
           |
        Class B

   Explanation:
   - Class A = Base / Parent class
   - Class B = Derived / Child class
   - Class B can access the members of Class A

   Example:
*/
class A
{
    // Base class members
};

class B : public A
{
    // Derived class members
};



/* =========================================================
   2. MULTIPLE INHERITANCE
   =========================================================

   Definition:
   One derived class inherits from more than one base class.

   Flow:
        Class A      Class B
             \        /
              \      /
              Class C

   Explanation:
   - Class C inherits properties from both A and B
   - Used when one class needs features of multiple classes

   Example:
*/
class A
{
};

class B
{
};

class C : public A, public B
{
};



/* =========================================================
   3. HIERARCHICAL INHERITANCE
   =========================================================

   Definition:
   Multiple derived classes inherit from a single base class.

   Flow:
               Class A
              /   |   \
             /    |    \
        Class B Class C Class D

   Explanation:
   - A is the common parent class
   - B, C, and D inherit from A
   - All derived classes share common features of A

   Example:
*/
class A
{
};

class B : public A
{
};

class C : public A
{
};

class D : public A
{
};



/* =========================================================
   4. MULTILEVEL INHERITANCE
   =========================================================

   Definition:
   A class is derived from another derived class.

   Flow:
        Class A
           |
        Class B
           |
        Class C

   Explanation:
   - B inherits from A
   - C inherits from B
   - Features pass level by level

   Example:
*/
class A
{
};

class B : public A
{
};

class C : public B
{
};



/* =========================================================
   5. HYBRID INHERITANCE
   =========================================================

   Definition:
   Combination of two or more types of inheritance.

   Flow:
            Class A
           /       \
          /         \
      Class B     Class C
           \       /
            \     /
            Class D

   Explanation:
   - Combines hierarchical + multiple inheritance
   - D inherits from both B and C

   Example:
*/
class A
{
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

