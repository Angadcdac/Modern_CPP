//visibilty 
//inheritence mode
#include <iostream>
using namespace std;
//This is the base class
class Employee{
	public:
	int id;
	float salary;
	Employee(int inputid)
	{
	   id = inputid;
	   salary = 34.0;
	
	}
	Employee(){}
};

//Derived class
//class derived_class_name:{visibility_mode} {base class name}
//{
//class member etc
//}

//visibilty mode
//Default visibilty code is private
//public visibilty mode : public member of the base class become public memeber of the derived class
//Private visbilty mode: public member of the base class becomes private members of the base class
//Private members of the base class are never inherited


//class Programmer : public Employee {//By default it is the private inherited
class Programmer : Employee {//By default it is the private inherited
	public:
        int language_code;
	Programmer(int inputid)
	{
	    id = inputid;//can not access id variable of the base class that must be public
	    language_code = 9;
	}
	void getdata(){
	     cout<<id<<endl;
	}
	 

};
int main(void)
{
	Employee harry(1),rohan(2);
	cout<<harry.salary<<endl;
 
	cout<<rohan.salary<<endl;
	Programmer skillf(10);
	cout<<skillf.language_code<<endl;
//	skillf.getdata();
//	cout<<skillf.id; //can not acess it because this is the private inherited that made the base class public data to private
//	cout<<skillf.salary;//change  the derived class public inheritence mode then user can access the base class member
        return 0;
}
