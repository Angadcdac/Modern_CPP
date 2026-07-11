///Friend function
#include <iostream>
using namespace std;
class Complex{
	int a;
	int b;
	public :
            void setNumber(int n1, int n2)
	    {
		     a = n1;
		     b = n2;
	    }
            //friend function declaration for accessing	 the private variable   
	    friend Complex sumComplex(Complex o1, Complex o2);
	    void printNumber()
	    {
		    cout<<"Your number is == "<<a <<" + "<<b<<"i"<<endl; 
	    }
};
//Friend function is allowed for accessing the private data of the class but give the declation in the class

Complex sumComplex(Complex o1, Complex o2){
	Complex o3;
	o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
	o3.setNumber((a + a),(b + b));//object name need it is not allowed
	return o3;
}
int main(void)
{
	Complex c1,c2,sum;
	c1.setNumber(1,4);
	
//	c1.sumComplex(c1, c2);//It is not allowed because it is not the member function//it is the friend functio
	
	c2.setNumber(5,8);
	c1.printNumber();
	c2.printNumber();
	sum = sumComplex(c1,c2);
	sum.printNumber(); 
}
//Properties of friend function
/*
 1.Not in the scop of class
 2.since it is not in hte scope of the class ,It can not be called 
 from the object of the class ,c1.sumComplex()==invalid
 3.can be invoked without the help of any project
 4.Usually contains the objects as the arguments 
 5.Can be decared the private and public part for declration
 6.It can not access the member directly by thier name and nedd object name.member name to access member
 6.
 
 */
