#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    float salary;

public:

    // Setter for Employee ID
    void setEmpId(int id)
    {
        emp_id = id;
    }

    // Getter for Employee ID
    int getEmpId()
    {
        return emp_id;
    }

    // Setter for Salary
    void setSalary(float sal)
    {
        if(sal > 0)
        {
            salary = sal;
        }
        else
        {
            cout << "Invalid Salary" << endl;
        }
    }

    // Getter for Salary
    float getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee emp;

    emp.setEmpId(101);
    emp.setSalary(50000);

    cout << "Employee ID : " << emp.getEmpId() << endl;
    cout << "Salary      : " << emp.getSalary() << endl;

    return 0;
}
/*
===============================================================================
                           GETTER AND SETTER IN C++
===============================================================================

Definition:
-----------
Getter and Setter are member functions used to access and modify private
data members of a class while maintaining Encapsulation.

1. Getter (Accessor)
   - Used to read/access the value of a private data member.
   - Does not modify the data.

2. Setter (Mutator)
   - Used to write/update the value of a private data member.
   - Can perform validation before updating the data.

Why Use Getters and Setters?
----------------------------
1. Data Hiding (Encapsulation).
2. Controlled access to private members.
3. Validation of input data.
4. Improves security and maintainability.

===============================================================================
Example:
===============================================================================
*/
