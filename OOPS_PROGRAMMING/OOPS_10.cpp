//	Friend classes member friend function
//We are makinng the friend of one class function to another class
#include <iostream>
using namespace std;
class  Complex; //Forword declaration of the complex class that means we are giving the decaltion that the 
		//Complex class defintion will be availble below otherwise it will give error in the calculator classs
class calculator{
	public:
	int add(int a,int b)
	{
	      return (a + b);
	}
	int  sumRealComplex(Complex ,Complex);//can not give the object as Complex a
	int  subRealComplex(Complex ,Complex);//can not give the object as Complex a
};
class Complex{
	int a;
	int b;
	/*
	//Individually declaring function as friend
	friend int calculator :: sumRealComplex (Complex o1 ,Complex o2);//making the friend of of another
									 //class function
        friend int calculator :: subRealComplex(Complex o1 ,Complex o2);
	*/
	//If we have the lot of function for declare the friend then we will use altering
	
	//Aliter : declare the entire calculator class as friend
	friend class calculator;
	public:
	void setNumber(int n1, int n2)
	{
		a = n1;
		b = n2;
	}
	void printNumber()
	{
		cout<<"Your Number is == "<<a<<" + "<<b<<"i"<<endl;
	}
};

int calculator :: sumRealComplex(Complex o1 ,Complex o2)
{
	return (o1.a + o2.a);
}
int calculator :: subRealComplex(Complex o1 ,Complex o2)
{
	return (o1.a  - o2.a);
}
int main(void)
{
	Complex o1,o2;
	o1.setNumber(5, 4);
	o2.setNumber(1, 7);

	calculator calc;
	int res = calc.sumRealComplex(o1 ,o2);
	cout<<"The sum of the real part of o1 and o2 is "<<res<<endl;
	res = calc.subRealComplex(o1 ,o2);
	cout<<"The sub of the real part of o1 and o2 is "<<res<<endl;
	return 0;

}
