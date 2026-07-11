//This is the example of the runtime polimorphism
//In this code object is bind is decide runtime
#include<iostream>
using namespace std;
class BaseClass{
	public:
		int var_base;
		void display(){
		     cout <<"The base class variable is == "<<var_base<<endl;
		}

};

class Derived : public BaseClass{
	public:
	     int var_der;
	     void display(){
		     cout<<"in derived base == "<<var_base<<endl;
		     cout<< "dispaly the derived class variable"<<var_der<<endl;
	     }
};

int main(void)
{
	BaseClass *base_class_pointer;
	BaseClass obj_base;
	Derived obj_derived;
	base_class_pointer = &obj_derived;//base class pointer can point the derived class object
	
	//This is point the Baseclass although it is having the adress of the derived class and when 
	//you will run it it will bind with the base class that is called late binding at runtime 
//	base_class_pointer->var_base = 34;
//	base_class_pointer->display();

	//It will give the error because the pointer is pointing to the base class
//	base_class_pointer->var_der = 34;
        
	Derived  *derived_obj = &obj_derived;//this is the binding with the derived class on runtime bind
	derived_obj->var_der = 80;
	derived_obj->var_base = 100;
	//it will call the  
	derived_obj->display();
	return 0;
}
