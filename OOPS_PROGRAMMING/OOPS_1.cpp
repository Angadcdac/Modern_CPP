#include<iostream>
using namespace std;
class Employee
{
	//By default class member is private
	private:
		int a,b,c;
	public:
	        int d,e;
		//This is the prototpye of the member function
	        void setData(int num1,int num2,int num3);//this is called member function
                void getData()
	        {
		       cout<<"the value of a == "<<a<<endl;
		       cout<<"the value of b == "<<b<<endl;
		       cout<<"the value of c == "<<c<<endl;
		       cout<<"the value of d == "<<d<<endl;
		       cout<<"the value of e == "<<e<<endl;
	        }	       
};
//This is the Employee class member function that why it is using the scope resolution operator
//if remove hte void Employee then it will give the error
void Employee::setData(int a1,int b1,int c1)
{
	//a ,b c is private in the class that is why it can be accessed in the 
	//member function even you can not access by creating the object as 
	//commented below
	a = a1;
	b = b1;
	c = c1;
}
int main(void)
{
	Employee obj1;
	//obj1.a = 10 //It cant be accesses because of the private
	//obj1.b = 29; 
	obj1.d = 34;
	obj1.e = 45;
	obj1.setData(1,2,3);
	obj1.getData();
	return 0;

}
