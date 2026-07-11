//Constructor Overloading is as a function overloading as per the parameter
#include <iostream>
using namespace std;
class Complex{
	int a,b;
	public:
	Complex(int x,int y)
	{
	    a = x;
	    b = y;
	}
	Complex (int x)//thiis is the example of constrcotr overloading
	{
		a = x;
		b = 0; 
	
	}
	Complex (void)
	{
	        a = 0;
	        b = 0;
	}
	void printNumber(void)
	{
	  cout<<"a == "<<a<<"\nb == "<<b<<endl;
	}
};
int main(void)
{
	//Complex c1;
	//c1(4,6); //give error
	Complex c1(4,6);
	c1.printNumber();

	Complex c2(5);
	c2.printNumber();

	Complex c3;
	c3.printNumber();
	return 0;

}
