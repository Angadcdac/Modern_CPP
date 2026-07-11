#include <iostream>
using namespace std;
//set the value of member data using cnstructor not using function as setData
class Complex{
	int a ,b;
	public:
        //Constructor is special member function as the same name of the class 
	//It is used to initilize the object of the class
	//It is autoamic called do not need to call seperatly
	Complex(void);//Constructor decalrattion//Automatic run //not return anything
        void printNumber(void)
	{
	   cout <<"value of a is == "<<a<<"\n"<<"vlaue of b is =="<<b<<endl;
	}
};
Complex :: Complex(void)//the conctructor who does not take parmeter is the default constructor
{
	a = 10;
        b = 0;
	//cout <<"called autmatically"<<endl;//as soon as object created see the output
}
int main()
{
	Complex c,c2,c3;
	c.printNumber();
	c2.printNumber();
	c3.printNumber();
}
//It should predclared in the public section of the class
//Invoked automatically as soon as object created
//Do not have return type even void
//It can have default arguments
//We can not refer to the adress












