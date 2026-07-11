//parameterized constrctor
#include <iostream>
using namespace std;
class Complex{
	int a,b;
	//Complex (void); //it can not be private
	public:
	Complex (int , int );
        void printNumber(void)
	{
	  cout <<"Your numbere is == "<<a <<" + "<<b<<"i"<<endl;
	}

};
Complex :: Complex(int x ,int y)//this is the parameterized constructor
{
	a = x;
        b = y;
}
int main(void)
{
	//implicit call
	Complex a(3,4);//implicit call to the parmeterized constrctor
	a.printNumber();

	//Explicit call
	Complex b = Complex(5 ,7);
	b.printNumber();	
	return 0;
}
